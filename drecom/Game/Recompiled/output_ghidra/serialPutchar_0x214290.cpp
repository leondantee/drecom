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

// Function: serialPutchar
// Address: 0x214290 - 0x2142c4
void serialPutchar_0x214290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("serialPutchar_0x214290");
#endif

    switch (ctx->pc) {
        case 0x2142a8u: goto label_2142a8;
        default: break;
    }

    ctx->pc = 0x214290u;

    // 0x214290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x214290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214294: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x214294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x214298: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x214298u;
    {
        const bool branch_taken_0x214298 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214298u;
        // 0x21429c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214298) {
            ctx->pc = 0x2142B8u;
            goto label_2142b8;
        }
    }
    ctx->pc = 0x2142A0u;
    // 0x2142a0: 0xc08506a  jal         func_2141A8
    ctx->pc = 0x2142A0u;
    SET_GPR_U32(ctx, 31, 0x2142A8u);
    ctx->pc = 0x2142A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142A0u;
    // 0x2142a4: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2141A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2141A8u, 0x2142A0u, 0x2142A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2142A8u;
label_2142a8:
    // 0x2142a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2142a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2142ac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2142acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2142b0: 0x808506a  j           func_2141A8
    ctx->pc = 0x2142B0u;
    ctx->pc = 0x2142B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142B0u;
    // 0x2142b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2141A8u;
    kputchar_0x2141a8(rdram, ctx, runtime); return;
    ctx->pc = 0x2142B8u;
label_2142b8:
    // 0x2142b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2142b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2142bc: 0x808506a  j           func_2141A8
    ctx->pc = 0x2142BCu;
    ctx->pc = 0x2142C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2142BCu;
    // 0x2142c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2141A8u;
    kputchar_0x2141a8(rdram, ctx, runtime); return;
    ctx->pc = 0x2142C4u;
}
