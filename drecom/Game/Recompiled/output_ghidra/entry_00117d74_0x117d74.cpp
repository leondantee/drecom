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

// Function: entry_00117d74
// Address: 0x117d74 - 0x117d9c
void entry_00117d74_0x117d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117d74_0x117d74");
#endif

    switch (ctx->pc) {
        case 0x117d8cu: goto label_117d8c;
        default: break;
    }

    ctx->pc = 0x117d74u;

    // 0x117d74: 0x3c11009a  lui         $s1, 0x9A
    ctx->pc = 0x117d74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)154 << 16));
    // 0x117d78: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x117d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x117d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x117d80: 0xae200e20  sw          $zero, 0xE20($s1)
    ctx->pc = 0x117d80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x9A0E20u, _value); } while (0);
    // 0x117d84: 0xc084c1c  jal         func_213070
    ctx->pc = 0x117D84u;
    SET_GPR_U32(ctx, 31, 0x117D8Cu);
    ctx->pc = 0x117D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117D84u;
    // 0x117d88: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213070u;
    {
        ctx->pc = 0x117D8Cu;
        ps2_stubs::lseek(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x117D8Cu) { return; }
    ctx->pc = 0x117D8Cu;
label_117d8c:
    // 0x117d8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117d8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117d90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x117d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117d94: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x117D94u;
    {
        const bool branch_taken_0x117d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x117D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117D94u;
        // 0x117d98: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117d94) {
            ctx->pc = 0x117DACu;
            return;
        }
    }
    ctx->pc = 0x117D9Cu;
}
