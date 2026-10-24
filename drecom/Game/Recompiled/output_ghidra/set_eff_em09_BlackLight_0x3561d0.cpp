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

// Function: set_eff_em09_BlackLight
// Address: 0x3561d0 - 0x3562b4
void set_eff_em09_BlackLight_0x3561d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_em09_BlackLight_0x3561d0");
#endif

    switch (ctx->pc) {
        case 0x356210u: goto label_356210;
        case 0x35625cu: goto label_35625c;
        default: break;
    }

    ctx->pc = 0x3561d0u;

    // 0x3561d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3561d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3561d4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3561d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3561d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3561d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3561dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3561dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3561e0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x3561e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x3561e4: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x3561e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3561e8: 0xe7ad0050  swc1        $f13, 0x50($sp)
    ctx->pc = 0x3561e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3561ec: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x3561ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    // 0x3561f0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3561f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3561f4: 0x2463a5f0  addiu       $v1, $v1, -0x5A10
    ctx->pc = 0x3561f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944240));
    // 0x3561f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3561f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3561fc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x3561fcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA5F0u));
    // 0x356200: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x356200u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x356204: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x356204u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356208: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x356208u;
    {
        const bool branch_taken_0x356208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356208) {
            ctx->pc = 0x356290u;
            goto label_356290;
        }
    }
    ctx->pc = 0x356210u;
label_356210:
    // 0x356210: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x356210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x356214: 0x2442a600  addiu       $v0, $v0, -0x5A00
    ctx->pc = 0x356214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
    // 0x356218: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x356218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35621c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x35621cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356220: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x356220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x356224: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x356224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x356228: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x356228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35622c: 0x2442a620  addiu       $v0, $v0, -0x59E0
    ctx->pc = 0x35622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944288));
    // 0x356230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x356230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x356234: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x356234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356238: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x356238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35623c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x35623cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x356240: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x356240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x356244: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x356244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x356248: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x356248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35624c: 0xc7ad0050  lwc1        $f13, 0x50($sp)
    ctx->pc = 0x35624cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x356250: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x356250u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x356254: 0xc0864b8  jal         func_2192E0
    ctx->pc = 0x356254u;
    SET_GPR_U32(ctx, 31, 0x35625Cu);
    ctx->pc = 0x2192E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2192E0u, 0x356254u, 0x35625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35625Cu;
label_35625c:
    // 0x35625c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x35625cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x356260: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x356260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x356264: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x356264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x356268: 0x12230007  beq         $s1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x356268u;
    {
        const bool branch_taken_0x356268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x356268) {
            ctx->pc = 0x356288u;
            goto label_356288;
        }
    }
    ctx->pc = 0x356270u;
    // 0x356270: 0x96230118  lhu         $v1, 0x118($s1)
    ctx->pc = 0x356270u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x356274: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x356274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x356278: 0xa6230118  sh          $v1, 0x118($s1)
    ctx->pc = 0x356278u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x35627c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x35627cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x356280: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x356280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x356284: 0xa223011c  sb          $v1, 0x11C($s1)
    ctx->pc = 0x356284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 284), (uint8_t)GPR_U32(ctx, 3));
label_356288:
    // 0x356288: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x356288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35628c: 0x0  nop
    ctx->pc = 0x35628cu;
    // NOP
label_356290:
    // 0x356290: 0x2e03001b  sltiu       $v1, $s0, 0x1B
    ctx->pc = 0x356290u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)27) ? 1 : 0);
    // 0x356294: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x356294u;
    {
        const bool branch_taken_0x356294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x356294) {
            ctx->pc = 0x356210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356210;
        }
    }
    ctx->pc = 0x35629Cu;
    // 0x35629c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35629cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3562a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3562a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3562a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3562a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3562a8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3562a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3562ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3562ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3562ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3562B4u;
}
