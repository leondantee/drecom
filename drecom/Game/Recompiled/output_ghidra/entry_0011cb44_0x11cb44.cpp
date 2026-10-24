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

// Function: entry_0011cb44
// Address: 0x11cb44 - 0x11cb6c
void entry_0011cb44_0x11cb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cb44_0x11cb44");
#endif

    switch (ctx->pc) {
        case 0x11cb5cu: goto label_11cb5c;
        default: break;
    }

    ctx->pc = 0x11cb44u;

    // 0x11cb44: 0x3c11009a  lui         $s1, 0x9A
    ctx->pc = 0x11cb44u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)154 << 16));
    // 0x11cb48: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11cb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11cb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11cb50: 0xae200e20  sw          $zero, 0xE20($s1)
    ctx->pc = 0x11cb50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0E20u, _value); } while (0);
    // 0x11cb54: 0xc084bd0  jal         func_212F40
    ctx->pc = 0x11CB54u;
    SET_GPR_U32(ctx, 31, 0x11CB5Cu);
    ctx->pc = 0x11CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CB54u;
    // 0x11cb58: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212F40u;
    {
        ctx->pc = 0x11CB5Cu;
        ps2_stubs::write(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11CB5Cu) { return; }
    ctx->pc = 0x11CB5Cu;
label_11cb5c:
    // 0x11cb5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11cb5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cb60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11cb64: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CB64u;
    {
        const bool branch_taken_0x11cb64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CB64u;
        // 0x11cb68: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cb64) {
            ctx->pc = 0x11CB7Cu;
            return;
        }
    }
    ctx->pc = 0x11CB6Cu;
}
