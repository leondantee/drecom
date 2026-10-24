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

// Function: entry_001354e0
// Address: 0x1354e0 - 0x135548
void entry_001354e0_0x1354e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001354e0_0x1354e0");
#endif

    switch (ctx->pc) {
        case 0x1354ecu: goto label_1354ec;
        case 0x135518u: goto label_135518;
        case 0x135540u: goto label_135540;
        default: break;
    }

    ctx->pc = 0x1354e0u;

    // 0x1354e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1354e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1354e4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1354E4u;
    SET_GPR_U32(ctx, 31, 0x1354ECu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1354ECu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1354ECu) { return; }
    ctx->pc = 0x1354ECu;
label_1354ec:
    // 0x1354ec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1354ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1354f0: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x1354f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x1354f4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1354f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1354f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1354f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1354fc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1354FCu;
    {
        const bool branch_taken_0x1354fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1354fc) {
            ctx->pc = 0x135580u;
            return;
        }
    }
    ctx->pc = 0x135504u;
    // 0x135504: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x135504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x135508: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x135508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x13550c: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x13550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x135510: 0xc067844  jal         func_19E110
    ctx->pc = 0x135510u;
    SET_GPR_U32(ctx, 31, 0x135518u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x135510u, 0x135518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135518u;
label_135518:
    // 0x135518: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x135518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x13551c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13551Cu;
    {
        const bool branch_taken_0x13551c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13551c) {
            ctx->pc = 0x135548u;
            return;
        }
    }
    ctx->pc = 0x135524u;
    // 0x135524: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x135524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x135528: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x135528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x13552c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13552cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x135530: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135534: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x135534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135538: 0xc040ce4  jal         func_103390
    ctx->pc = 0x135538u;
    SET_GPR_U32(ctx, 31, 0x135540u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x135540u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x135540u) { return; }
    ctx->pc = 0x135540u;
label_135540:
    // 0x135540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x135540u;
    {
        const bool branch_taken_0x135540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135540) {
            ctx->pc = 0x135564u;
            return;
        }
    }
    ctx->pc = 0x135548u;
}
