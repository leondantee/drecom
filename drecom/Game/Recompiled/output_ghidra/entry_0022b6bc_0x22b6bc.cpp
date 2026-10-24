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

// Function: entry_0022b6bc
// Address: 0x22b6bc - 0x22b798
void entry_0022b6bc_0x22b6bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b6bc_0x22b6bc");
#endif

    switch (ctx->pc) {
        case 0x22b704u: goto label_22b704;
        default: break;
    }

    ctx->pc = 0x22b6bcu;

    // 0x22b6bc: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b6c0: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x22b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x22b6c4: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x22b6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b6c8: 0xc4a000a0  lwc1        $f0, 0xA0($a1)
    ctx->pc = 0x22b6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b6cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22b6ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22b6d0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x22b6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x22b6d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b6d8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b6dc: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x22b6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22b6e0: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x22b6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22b6e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22b6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22b6e8: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x22b6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x22b6ec: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x22b6ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x22b6f0: 0x3042ffbf  andi        $v0, $v0, 0xFFBF
    ctx->pc = 0x22b6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65471);
    // 0x22b6f4: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x22b6f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x22b6f8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b6fc: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x22B6FCu;
    SET_GPR_U32(ctx, 31, 0x22B704u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x22B6FCu, 0x22B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B704u;
label_22b704:
    // 0x22b704: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x22b704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b708: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x22b708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x22b70c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22b70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x22b710: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x22b710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x22b714: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x22B714u;
    {
        const bool branch_taken_0x22b714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b714) {
            ctx->pc = 0x22B920u;
            return;
        }
    }
    ctx->pc = 0x22B71Cu;
    // 0x22b71c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b720: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x22b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x22b724: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x22b724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b728: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x22b728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x22b72c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b730: 0x0  nop
    ctx->pc = 0x22b730u;
    // NOP
    // 0x22b734: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x22b734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x22b738: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b73c: 0x0  nop
    ctx->pc = 0x22b73cu;
    // NOP
    // 0x22b740: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x22b740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x22b744: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b748: 0x0  nop
    ctx->pc = 0x22b748u;
    // NOP
    // 0x22b74c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x22b74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x22b750: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x22b750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x22b754: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x22b754u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b758: 0x0  nop
    ctx->pc = 0x22b758u;
    // NOP
    // 0x22b75c: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x22b75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x22b760: 0x3c0743fa  lui         $a3, 0x43FA
    ctx->pc = 0x22b760u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17402 << 16));
    // 0x22b764: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x22b764u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b768: 0x0  nop
    ctx->pc = 0x22b768u;
    // NOP
    // 0x22b76c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x22b76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x22b770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b774: 0xa7a20084  sh          $v0, 0x84($sp)
    ctx->pc = 0x22b774u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x22b778: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b77c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x22b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22b780: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x22b780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x22b784: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x22b784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x22b788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B788u;
    {
        const bool branch_taken_0x22b788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b788) {
            ctx->pc = 0x22B798u;
            return;
        }
    }
    ctx->pc = 0x22B790u;
    // 0x22b790: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x22b790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x22b794: 0xa7a50084  sh          $a1, 0x84($sp)
    ctx->pc = 0x22b794u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x22b798u;
}
