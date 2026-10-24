#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0022d07c
// Address: 0x22d07c - 0x22d158
void entry_0022d07c_0x22d07c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022d07c_0x22d07c");
#endif

    switch (ctx->pc) {
        case 0x22d0c4u: goto label_22d0c4;
        default: break;
    }

    ctx->pc = 0x22d07cu;

    // 0x22d07c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d080: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d084: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x22d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d088: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d08c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22d08cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22d090: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x22d090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x22d094: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d098: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d09c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x22d09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22d0a0: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22d0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22d0a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22d0a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22d0a8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x22d0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x22d0ac: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x22d0acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x22d0b0: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x22d0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x22d0b4: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x22d0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d0b8: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x22d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d0bc: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x22D0BCu;
    SET_GPR_U32(ctx, 31, 0x22D0C4u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x22D0BCu, 0x22D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22D0C4u;
label_22d0c4:
    // 0x22d0c4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x22d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d0c8: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x22d0c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x22d0cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22d0ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22d0d0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x22d0d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22d0d4: 0x10600081  beqz        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x22D0D4u;
    {
        const bool branch_taken_0x22d0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d0d4) {
            ctx->pc = 0x22D2DCu;
            return;
        }
    }
    ctx->pc = 0x22D0DCu;
    // 0x22d0dc: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d0e0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x22d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x22d0e4: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x22d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22d0e8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x22d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x22d0ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d0f0: 0x0  nop
    ctx->pc = 0x22d0f0u;
    // NOP
    // 0x22d0f4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x22d0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22d0f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d0fc: 0x0  nop
    ctx->pc = 0x22d0fcu;
    // NOP
    // 0x22d100: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x22d100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x22d104: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22d104u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d108: 0x0  nop
    ctx->pc = 0x22d108u;
    // NOP
    // 0x22d10c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x22d10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x22d110: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22d110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22d114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d118: 0x0  nop
    ctx->pc = 0x22d118u;
    // NOP
    // 0x22d11c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22d11cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22d120: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x22d120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x22d124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22d124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22d128: 0x0  nop
    ctx->pc = 0x22d128u;
    // NOP
    // 0x22d12c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22d12cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22d130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22d130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22d134: 0xa7a20044  sh          $v0, 0x44($sp)
    ctx->pc = 0x22d134u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x22d138: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x22d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x22d13c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22d13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22d140: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x22d140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x22d144: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x22d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x22d148: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D148u;
    {
        const bool branch_taken_0x22d148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22d148) {
            ctx->pc = 0x22D158u;
            return;
        }
    }
    ctx->pc = 0x22D150u;
    // 0x22d150: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x22d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22d154: 0xa7a20044  sh          $v0, 0x44($sp)
    ctx->pc = 0x22d154u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 68), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x22d158u;
}
