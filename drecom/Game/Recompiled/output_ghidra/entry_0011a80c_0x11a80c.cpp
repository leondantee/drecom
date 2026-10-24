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

// Function: entry_0011a80c
// Address: 0x11a80c - 0x11a834
void entry_0011a80c_0x11a80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a80c_0x11a80c");
#endif

    switch (ctx->pc) {
        case 0x11a824u: goto label_11a824;
        default: break;
    }

    ctx->pc = 0x11a80cu;

    // 0x11a80c: 0x3c11009a  lui         $s1, 0x9A
    ctx->pc = 0x11a80cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)154 << 16));
    // 0x11a810: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11a810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a814: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11a814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11a818: 0xae200e20  sw          $zero, 0xE20($s1)
    ctx->pc = 0x11a818u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0E20u, _value); } while (0);
    // 0x11a81c: 0xc084bf0  jal         func_212FC0
    ctx->pc = 0x11A81Cu;
    SET_GPR_U32(ctx, 31, 0x11A824u);
    ctx->pc = 0x11A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A81Cu;
    // 0x11a820: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212FC0u;
    {
        ctx->pc = 0x11A824u;
        ps2_stubs::read(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11A824u) { return; }
    ctx->pc = 0x11A824u;
label_11a824:
    // 0x11a824: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11a824u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a828: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a82c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11A82Cu;
    {
        const bool branch_taken_0x11a82c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A82Cu;
        // 0x11a830: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a82c) {
            ctx->pc = 0x11A844u;
            return;
        }
    }
    ctx->pc = 0x11A834u;
}
