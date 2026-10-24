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

// Function: entry_0011cac4
// Address: 0x11cac4 - 0x11cae8
void entry_0011cac4_0x11cac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cac4_0x11cac4");
#endif

    ctx->pc = 0x11cac4u;

    // 0x11cac4: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x11CAC4u;
    {
        const bool branch_taken_0x11cac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cac4) {
            ctx->pc = 0x11CAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CAC4u;
            // 0x11cac8: 0xa7001a  div         $zero, $a1, $a3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CA98u;
            return;
        }
    }
    ctx->pc = 0x11CACCu;
    // 0x11cacc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x11caccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x11cad0: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x11cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x11cad4: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x11cad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x11cad8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11CAD8u;
    {
        const bool branch_taken_0x11cad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CAD8u;
        // 0x11cadc: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cad8) {
            ctx->pc = 0x11CB24u;
            return;
        }
    }
    ctx->pc = 0x11CAE0u;
    // 0x11cae0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x11cae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cae4: 0x0  nop
    ctx->pc = 0x11cae4u;
    // NOP
    ctx->pc = 0x11cae8u;
}
