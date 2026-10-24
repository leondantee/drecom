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

// Function: ectrl18_move02
// Address: 0x3591c0 - 0x359300
void ectrl18_move02_0x3591c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl18_move02_0x3591c0");
#endif

    switch (ctx->pc) {
        case 0x359228u: goto label_359228;
        case 0x359234u: goto label_359234;
        case 0x359294u: goto label_359294;
        case 0x3592a0u: goto label_3592a0;
        default: break;
    }

    ctx->pc = 0x3591c0u;

    // 0x3591c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3591c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3591c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x3591c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x3591c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x3591c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x3591cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3591ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3591d0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x3591d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3591d4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3591d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3591d8: 0x1083003c  beq         $a0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3591D8u;
    {
        const bool branch_taken_0x3591d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3591d8) {
            ctx->pc = 0x3592CCu;
            goto label_3592cc;
        }
    }
    ctx->pc = 0x3591E0u;
    // 0x3591e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3591e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3591e4: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x3591E4u;
    {
        const bool branch_taken_0x3591e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3591e4) {
            ctx->pc = 0x35924Cu;
            goto label_35924c;
        }
    }
    ctx->pc = 0x3591ECu;
    // 0x3591ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3591ECu;
    {
        const bool branch_taken_0x3591ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3591ec) {
            ctx->pc = 0x3591FCu;
            goto label_3591fc;
        }
    }
    ctx->pc = 0x3591F4u;
    // 0x3591f4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3591F4u;
    {
        const bool branch_taken_0x3591f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3591f4) {
            ctx->pc = 0x3592F0u;
            goto label_3592f0;
        }
    }
    ctx->pc = 0x3591FCu;
label_3591fc:
    // 0x3591fc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3591fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x359200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x359200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359204: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359208: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x359208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x35920c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x35920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359210: 0x24044806  addiu       $a0, $zero, 0x4806
    ctx->pc = 0x359210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18438));
    // 0x359214: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359214u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359218: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x359218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x35921c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x35921cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359220: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x359220u;
    SET_GPR_U32(ctx, 31, 0x359228u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x359220u, 0x359228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359228u;
label_359228:
    // 0x359228: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x359228u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x35922c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x35922Cu;
    SET_GPR_U32(ctx, 31, 0x359234u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x35922Cu, 0x359234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359234u;
label_359234:
    // 0x359234: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x359234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359238: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x359238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x35923c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35923cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x359240: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x359240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x359244: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x359244u;
    {
        const bool branch_taken_0x359244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359244) {
            ctx->pc = 0x3592F0u;
            goto label_3592f0;
        }
    }
    ctx->pc = 0x35924Cu;
label_35924c:
    // 0x35924c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35924cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x359250: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x359250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x359254: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x359254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x359258: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x359258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x35925c: 0x4810004  bgez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35925Cu;
    {
        const bool branch_taken_0x35925c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x35925c) {
            ctx->pc = 0x359270u;
            goto label_359270;
        }
    }
    ctx->pc = 0x359264u;
    // 0x359264: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x359264u;
    {
        const bool branch_taken_0x359264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x359264) {
            ctx->pc = 0x359270u;
            goto label_359270;
        }
    }
    ctx->pc = 0x35926Cu;
    // 0x35926c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x35926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_359270:
    // 0x359270: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x359270u;
    {
        const bool branch_taken_0x359270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359270) {
            ctx->pc = 0x3592F0u;
            goto label_3592f0;
        }
    }
    ctx->pc = 0x359278u;
    // 0x359278: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x359278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35927c: 0x24044806  addiu       $a0, $zero, 0x4806
    ctx->pc = 0x35927cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18438));
    // 0x359280: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x359280u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x359284: 0x244600a0  addiu       $a2, $v0, 0xA0
    ctx->pc = 0x359284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x359288: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x359288u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35928c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x35928Cu;
    SET_GPR_U32(ctx, 31, 0x359294u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x35928Cu, 0x359294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359294u;
label_359294:
    // 0x359294: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x359294u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x359298: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x359298u;
    SET_GPR_U32(ctx, 31, 0x3592A0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x359298u, 0x3592A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3592A0u;
label_3592a0:
    // 0x3592a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3592a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592a4: 0x8c6300d4  lw          $v1, 0xD4($v1)
    ctx->pc = 0x3592a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x3592a8: 0x28610033  slti        $at, $v1, 0x33
    ctx->pc = 0x3592a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x3592ac: 0x14200010  bnez        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x3592ACu;
    {
        const bool branch_taken_0x3592ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3592ac) {
            ctx->pc = 0x3592F0u;
            goto label_3592f0;
        }
    }
    ctx->pc = 0x3592B4u;
    // 0x3592b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3592b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592b8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3592b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3592bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3592bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3592c0: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3592c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3592c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3592C4u;
    {
        const bool branch_taken_0x3592c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3592c4) {
            ctx->pc = 0x3592F0u;
            goto label_3592f0;
        }
    }
    ctx->pc = 0x3592CCu;
label_3592cc:
    // 0x3592cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3592ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592d0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3592d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3592d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3592d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3592d8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3592d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x3592dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3592dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3592e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3592e4: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x3592e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x3592e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3592e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3592ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3592f0:
    // 0x3592f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3592f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3592f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3592f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3592f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3592F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3592F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359300u;
}
