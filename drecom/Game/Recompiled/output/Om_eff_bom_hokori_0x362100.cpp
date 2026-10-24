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

// Function: Om_eff_bom_hokori
// Address: 0x362100 - 0x362264
void Om_eff_bom_hokori_0x362100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om_eff_bom_hokori_0x362100");
#endif

    switch (ctx->pc) {
        case 0x362168u: goto label_362168;
        case 0x362170u: goto label_362170;
        case 0x3621bcu: goto label_3621bc;
        case 0x3621c8u: goto label_3621c8;
        case 0x3621f4u: goto label_3621f4;
        case 0x3621fcu: goto label_3621fc;
        case 0x362230u: goto label_362230;
        case 0x36223cu: goto label_36223c;
        default: break;
    }

    ctx->pc = 0x362100u;

    // 0x362100: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x362100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x362104: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x362104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x362108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36210c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x36210cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x362110: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x362110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x362114: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x362114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x362118: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x362118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36211c: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x36211cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x362120: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x362120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x362124: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x362124u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x362128: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x362128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36212c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36212cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x362130: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x362130u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x362134: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x362134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x362138: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36213c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36213Cu;
    {
        const bool branch_taken_0x36213c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36213c) {
            ctx->pc = 0x362150u;
            goto label_362150;
        }
    }
    ctx->pc = 0x362144u;
    // 0x362144: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362148: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x362148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36214c: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x36214cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_362150:
    // 0x362150: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x362150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362154: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x362154u;
    {
        const bool branch_taken_0x362154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x362154) {
            ctx->pc = 0x3621E8u;
            goto label_3621e8;
        }
    }
    ctx->pc = 0x36215Cu;
    // 0x36215c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x36215cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362160: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x362160u;
    {
        const bool branch_taken_0x362160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x362160) {
            ctx->pc = 0x3621D0u;
            goto label_3621d0;
        }
    }
    ctx->pc = 0x362168u;
label_362168:
    // 0x362168: 0xc06765c  jal         func_19D970
    ctx->pc = 0x362168u;
    SET_GPR_U32(ctx, 31, 0x362170u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x362168u, 0x362170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362170u;
label_362170:
    // 0x362170: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x362170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x362174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x362174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x362178: 0x0  nop
    ctx->pc = 0x362178u;
    // NOP
    // 0x36217c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36217cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x362180: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x362180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362184: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x362184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x362188: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x362188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36218c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x362190: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x362190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x362194: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x362194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x362198: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x362198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x36219c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x36219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3621a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3621a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3621a4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x3621a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3621a8: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x3621a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x3621ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3621acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3621b0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3621b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3621b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x3621B4u;
    SET_GPR_U32(ctx, 31, 0x3621BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x3621B4u, 0x3621BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621BCu;
label_3621bc:
    // 0x3621bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3621bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3621c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3621C0u;
    SET_GPR_U32(ctx, 31, 0x3621C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3621C0u, 0x3621C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621C8u;
label_3621c8:
    // 0x3621c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3621c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3621cc: 0x0  nop
    ctx->pc = 0x3621ccu;
    // NOP
label_3621d0:
    // 0x3621d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3621d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3621d4: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3621d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3621d8: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3621D8u;
    {
        const bool branch_taken_0x3621d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3621d8) {
            ctx->pc = 0x362168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_362168;
        }
    }
    ctx->pc = 0x3621E0u;
    // 0x3621e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3621E0u;
    {
        const bool branch_taken_0x3621e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3621e0) {
            ctx->pc = 0x362250u;
            goto label_362250;
        }
    }
    ctx->pc = 0x3621E8u;
label_3621e8:
    // 0x3621e8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3621e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3621ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3621ECu;
    {
        const bool branch_taken_0x3621ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3621ec) {
            ctx->pc = 0x362240u;
            goto label_362240;
        }
    }
    ctx->pc = 0x3621F4u;
label_3621f4:
    // 0x3621f4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x3621F4u;
    SET_GPR_U32(ctx, 31, 0x3621FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x3621F4u, 0x3621FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3621FCu;
label_3621fc:
    // 0x3621fc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3621fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x362200: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x362200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x362204: 0x0  nop
    ctx->pc = 0x362204u;
    // NOP
    // 0x362208: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x362208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36220c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x36220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x362210: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x362210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x362214: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x362214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x362218: 0x24041301  addiu       $a0, $zero, 0x1301
    ctx->pc = 0x362218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4865));
    // 0x36221c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36221cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362220: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x362220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x362224: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x362224u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x362228: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x362228u;
    SET_GPR_U32(ctx, 31, 0x362230u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x362228u, 0x362230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362230u;
label_362230:
    // 0x362230: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x362230u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x362234: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x362234u;
    SET_GPR_U32(ctx, 31, 0x36223Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x362234u, 0x36223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36223Cu;
label_36223c:
    // 0x36223c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36223cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_362240:
    // 0x362240: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x362240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x362244: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x362244u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x362248: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x362248u;
    {
        const bool branch_taken_0x362248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x362248) {
            ctx->pc = 0x3621F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3621f4;
        }
    }
    ctx->pc = 0x362250u;
label_362250:
    // 0x362250: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x362250u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362258: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x362258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36225c: 0x3e00008  jr          $ra
    ctx->pc = 0x36225Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36225Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362264u;
}
