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

// Function: entry_0021e280
// Address: 0x21e280 - 0x21e358
void entry_0021e280_0x21e280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021e280_0x21e280");
#endif

    switch (ctx->pc) {
        case 0x21e2d8u: goto label_21e2d8;
        case 0x21e2f8u: goto label_21e2f8;
        case 0x21e318u: goto label_21e318;
        default: break;
    }

    ctx->pc = 0x21e280u;

    // 0x21e280: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e284: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x21e284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x21e288: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x21e288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21e28c: 0x14640032  bne         $v1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x21E28Cu;
    {
        const bool branch_taken_0x21e28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x21e28c) {
            ctx->pc = 0x21E358u;
            return;
        }
    }
    ctx->pc = 0x21E294u;
    // 0x21e294: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e298: 0x8c830130  lw          $v1, 0x130($a0)
    ctx->pc = 0x21e298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x21e29c: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x21e29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21e2a0: 0xac850130  sw          $a1, 0x130($a0)
    ctx->pc = 0x21e2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 5));
    // 0x21e2a4: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e2a8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x21e2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x21e2ac: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x21E2ACu;
    {
        const bool branch_taken_0x21e2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e2ac) {
            ctx->pc = 0x21E4ACu;
            return;
        }
    }
    ctx->pc = 0x21E2B4u;
    // 0x21e2b4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e2b8: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x21e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e2bc: 0xac44012c  sw          $a0, 0x12C($v0)
    ctx->pc = 0x21e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 4));
    // 0x21e2c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e2c4: 0x94640118  lhu         $a0, 0x118($v1)
    ctx->pc = 0x21e2c4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
    // 0x21e2c8: 0x3082fffe  andi        $v0, $a0, 0xFFFE
    ctx->pc = 0x21e2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65534);
    // 0x21e2cc: 0xa4620118  sh          $v0, 0x118($v1)
    ctx->pc = 0x21e2ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x21e2d0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E2D0u;
    SET_GPR_U32(ctx, 31, 0x21E2D8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E2D0u, 0x21E2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2D8u;
label_21e2d8:
    // 0x21e2d8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x21e2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x21e2dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e2dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e2e0: 0x0  nop
    ctx->pc = 0x21e2e0u;
    // NOP
    // 0x21e2e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e2e8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e2ec: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x21e2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x21e2f0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E2F0u;
    SET_GPR_U32(ctx, 31, 0x21E2F8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E2F0u, 0x21E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E2F8u;
label_21e2f8:
    // 0x21e2f8: 0x3c0440a0  lui         $a0, 0x40A0
    ctx->pc = 0x21e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16544 << 16));
    // 0x21e2fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21e2fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e300: 0x0  nop
    ctx->pc = 0x21e300u;
    // NOP
    // 0x21e304: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e308: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e30c: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x21e30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x21e310: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21E310u;
    SET_GPR_U32(ctx, 31, 0x21E318u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21E310u, 0x21E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E318u;
label_21e318:
    // 0x21e318: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x21e318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x21e31c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21e31cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21e320: 0x0  nop
    ctx->pc = 0x21e320u;
    // NOP
    // 0x21e324: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21e324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21e328: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x21e328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e32c: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x21e32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x21e330: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x21e330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x21e334: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21e334u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e338: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e33c: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x21e33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x21e340: 0x3c05c000  lui         $a1, 0xC000
    ctx->pc = 0x21e340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49152 << 16));
    // 0x21e344: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x21e344u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21e348: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21e348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e34c: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x21e34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x21e350: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x21E350u;
    {
        const bool branch_taken_0x21e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e350) {
            ctx->pc = 0x21E4ACu;
            return;
        }
    }
    ctx->pc = 0x21E358u;
}
