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

// Function: Em1d_R1_dm00
// Address: 0x3711d0 - 0x3712c0
void Em1d_R1_dm00_0x3711d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R1_dm00_0x3711d0");
#endif

    switch (ctx->pc) {
        case 0x371248u: goto label_371248;
        case 0x371264u: goto label_371264;
        case 0x37127cu: goto label_37127c;
        case 0x371288u: goto label_371288;
        case 0x371298u: goto label_371298;
        case 0x3712a4u: goto label_3712a4;
        default: break;
    }

    ctx->pc = 0x3711d0u;

    // 0x3711d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3711d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3711d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3711d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3711d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3711d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3711dc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x3711dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x3711e0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3711e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3711e4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x3711e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3711e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3711e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3711ec: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x3711ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3711f0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3711f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3711f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3711f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3711f8: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3711F8u;
    {
        const bool branch_taken_0x3711f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3711f8) {
            ctx->pc = 0x37121Cu;
            goto label_37121c;
        }
    }
    ctx->pc = 0x371200u;
    // 0x371200: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x371200u;
    {
        const bool branch_taken_0x371200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x371200) {
            ctx->pc = 0x371210u;
            goto label_371210;
        }
    }
    ctx->pc = 0x371208u;
    // 0x371208: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x371208u;
    {
        const bool branch_taken_0x371208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x371208) {
            ctx->pc = 0x3712ACu;
            goto label_3712ac;
        }
    }
    ctx->pc = 0x371210u;
label_371210:
    // 0x371210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x371210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x371214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x371218: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x371218u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_37121c:
    // 0x37121c: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x37121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x371220: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x371220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x371224: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x371224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x371228: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x371228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37122c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x371230: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x371230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x371234: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x371234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x371238: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x371238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37123c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x37123cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x371240: 0xc05c848  jal         func_172120
    ctx->pc = 0x371240u;
    SET_GPR_U32(ctx, 31, 0x371248u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x371240u, 0x371248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371248u;
label_371248:
    // 0x371248: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x371248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x37124c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x371250: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x371250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371254: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x371254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x371258: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x371258u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37125c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x37125Cu;
    SET_GPR_U32(ctx, 31, 0x371264u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x37125Cu, 0x371264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371264u;
label_371264:
    // 0x371264: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x371264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x371268: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x371268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x37126c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37126cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x371270: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x371270u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371274: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x371274u;
    SET_GPR_U32(ctx, 31, 0x37127Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x371274u, 0x37127Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37127Cu;
label_37127c:
    // 0x37127c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x371280: 0xc05cd10  jal         func_173440
    ctx->pc = 0x371280u;
    SET_GPR_U32(ctx, 31, 0x371288u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x371280u, 0x371288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371288u;
label_371288:
    // 0x371288: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x371288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37128c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37128cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371290: 0xc0dbb90  jal         func_36EE40
    ctx->pc = 0x371290u;
    SET_GPR_U32(ctx, 31, 0x371298u);
    ctx->pc = 0x36EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36EE40u, 0x371290u, 0x371298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371298u;
label_371298:
    // 0x371298: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x371298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37129c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37129Cu;
    SET_GPR_U32(ctx, 31, 0x3712A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37129Cu, 0x3712A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3712A4u;
label_3712a4:
    // 0x3712a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3712a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3712a8: 0x0  nop
    ctx->pc = 0x3712a8u;
    // NOP
label_3712ac:
    // 0x3712ac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3712acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3712b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3712b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3712b4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3712b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3712b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3712B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3712B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3712C0u;
}
