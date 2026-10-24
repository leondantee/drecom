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

// Function: entry_003402ac
// Address: 0x3402ac - 0x340330
void entry_003402ac_0x3402ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003402ac_0x3402ac");
#endif

    switch (ctx->pc) {
        case 0x3402fcu: goto label_3402fc;
        case 0x340320u: goto label_340320;
        default: break;
    }

    ctx->pc = 0x3402acu;

    // 0x3402ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3402acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3402b0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3402b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3402b4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x3402b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3402b8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3402b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3402bc: 0x8c821298  lw          $v0, 0x1298($a0)
    ctx->pc = 0x3402bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4760)));
    // 0x3402c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3402c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3402c4: 0xac821298  sw          $v0, 0x1298($a0)
    ctx->pc = 0x3402c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4760), GPR_U32(ctx, 2));
    // 0x3402c8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x3402c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x3402cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3402ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3402d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3402d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3402d4: 0xe44012cc  swc1        $f0, 0x12CC($v0)
    ctx->pc = 0x3402d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4812), bits); }
    // 0x3402d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3402d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3402dc: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3402dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3402e0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x3402e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3402e4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x3402e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3402e8: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3402e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3402ec: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x3402ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3402f0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x3402f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3402f4: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3402F4u;
    SET_GPR_U32(ctx, 31, 0x3402FCu);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3402F4u, 0x3402FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3402FCu;
label_3402fc:
    // 0x3402fc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3402fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x340300: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x340300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x340304: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x340304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340308: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x340308u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x34030c: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x34030cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x340310: 0x2409007f  addiu       $t1, $zero, 0x7F
    ctx->pc = 0x340310u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x340314: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x340314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x340318: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340318u;
    SET_GPR_U32(ctx, 31, 0x340320u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340318u, 0x340320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340320u;
label_340320:
    // 0x340320: 0x24040420  addiu       $a0, $zero, 0x420
    ctx->pc = 0x340320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1056));
    // 0x340324: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x340324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x340328: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x340328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34032c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x34032cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x340330u;
}
