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

// Function: srp_0e_move10
// Address: 0x3281c0 - 0x328308
void srp_0e_move10_0x3281c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_0e_move10_0x3281c0");
#endif

    switch (ctx->pc) {
        case 0x3281dcu: goto label_3281dc;
        case 0x328220u: goto label_328220;
        case 0x328228u: goto label_328228;
        case 0x328264u: goto label_328264;
        case 0x3282a0u: goto label_3282a0;
        default: break;
    }

    ctx->pc = 0x3281c0u;

    // 0x3281c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3281c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3281c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3281c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3281c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3281c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3281cc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x3281ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x3281d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3281d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3281d4: 0xc0ca294  jal         func_328A50
    ctx->pc = 0x3281D4u;
    SET_GPR_U32(ctx, 31, 0x3281DCu);
    ctx->pc = 0x328A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328A50u, 0x3281D4u, 0x3281DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3281DCu;
label_3281dc:
    // 0x3281dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3281dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3281e0: 0x8c640270  lw          $a0, 0x270($v1)
    ctx->pc = 0x3281e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x3281e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3281e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3281e8: 0x8c630274  lw          $v1, 0x274($v1)
    ctx->pc = 0x3281e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 628)));
    // 0x3281ec: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3281ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3281f0: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3281F0u;
    {
        const bool branch_taken_0x3281f0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3281f0) {
            ctx->pc = 0x328204u;
            goto label_328204;
        }
    }
    ctx->pc = 0x3281F8u;
    // 0x3281f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3281f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3281fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3281fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328200: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x328200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
label_328204:
    // 0x328204: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x328204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328208: 0x8c830274  lw          $v1, 0x274($a0)
    ctx->pc = 0x328208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x32820c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x328210: 0xac830274  sw          $v1, 0x274($a0)
    ctx->pc = 0x328210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 628), GPR_U32(ctx, 3));
    // 0x328214: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x328214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x328218: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x328218u;
    {
        const bool branch_taken_0x328218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x328218) {
            ctx->pc = 0x3282D8u;
            goto label_3282d8;
        }
    }
    ctx->pc = 0x328220u;
label_328220:
    // 0x328220: 0xc067648  jal         func_19D920
    ctx->pc = 0x328220u;
    SET_GPR_U32(ctx, 31, 0x328228u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328220u, 0x328228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328228u;
label_328228:
    // 0x328228: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x328228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x32822c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x32822cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x328230: 0x0  nop
    ctx->pc = 0x328230u;
    // NOP
    // 0x328234: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328234u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x328238: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32823c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x32823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328240: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328244: 0xc4400480  lwc1        $f0, 0x480($v0)
    ctx->pc = 0x328244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328248: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x328248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32824c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32824cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328250: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x328250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328254: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328258: 0xe4400480  swc1        $f0, 0x480($v0)
    ctx->pc = 0x328258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1152), bits); }
    // 0x32825c: 0xc067648  jal         func_19D920
    ctx->pc = 0x32825Cu;
    SET_GPR_U32(ctx, 31, 0x328264u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x32825Cu, 0x328264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328264u;
label_328264:
    // 0x328264: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x328264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x328268: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x328268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32826c: 0x0  nop
    ctx->pc = 0x32826cu;
    // NOP
    // 0x328270: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x328274: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328278: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x328278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32827c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x32827cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328280: 0xc4400484  lwc1        $f0, 0x484($v0)
    ctx->pc = 0x328280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328284: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x328284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x328288: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32828c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x32828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328290: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328294: 0xe4400484  swc1        $f0, 0x484($v0)
    ctx->pc = 0x328294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1156), bits); }
    // 0x328298: 0xc067648  jal         func_19D920
    ctx->pc = 0x328298u;
    SET_GPR_U32(ctx, 31, 0x3282A0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328298u, 0x3282A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3282A0u;
label_3282a0:
    // 0x3282a0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x3282a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x3282a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3282a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3282a8: 0x0  nop
    ctx->pc = 0x3282a8u;
    // NOP
    // 0x3282ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3282acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3282b0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3282b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3282b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3282b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3282b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3282b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3282bc: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x3282bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3282c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3282c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3282c4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3282c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3282c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3282c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3282cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3282ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3282d0: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x3282d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x3282d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3282d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3282d8:
    // 0x3282d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3282d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3282dc: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x3282dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x3282e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3282e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3282e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3282e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3282e8: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3282e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3282ec: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x3282ECu;
    {
        const bool branch_taken_0x3282ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3282ec) {
            ctx->pc = 0x328220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328220;
        }
    }
    ctx->pc = 0x3282F4u;
    // 0x3282f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3282f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3282f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3282f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3282fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3282fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x328300: 0x3e00008  jr          $ra
    ctx->pc = 0x328300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328308u;
}
