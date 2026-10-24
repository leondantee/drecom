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

// Function: entry_0013e680
// Address: 0x13e680 - 0x13e69c
void entry_0013e680_0x13e680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e680_0x13e680");
#endif

    ctx->pc = 0x13e680u;

label_13e680:
    // 0x13e680: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x13E680u;
    {
        const bool branch_taken_0x13e680 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e680) {
            ctx->pc = 0x13E69Cu;
            return;
        }
    }
    ctx->pc = 0x13E688u;
    // 0x13e688: 0x70094fc9  prot3w      $t1, $t1
    ctx->pc = 0x13e688u;
    SET_GPR_VEC(ctx, 9, _mm_shuffle_epi32(GPR_VEC(ctx, 9), _MM_SHUFFLE(0,3,2,1)));
    // 0x13e68c: 0x700a57c9  prot3w      $t2, $t2
    ctx->pc = 0x13e68cu;
    SET_GPR_VEC(ctx, 10, _mm_shuffle_epi32(GPR_VEC(ctx, 10), _MM_SHUFFLE(0,3,2,1)));
    // 0x13e690: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x13e690u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x13e694: 0x804f9a0  j           func_13E680
    ctx->pc = 0x13E694u;
    ctx->pc = 0x13E680u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_13e680;
    ctx->pc = 0x13E69Cu;
}
