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

// Function: entry_0018cbf4
// Address: 0x18cbf4 - 0x18cc10
void entry_0018cbf4_0x18cbf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cbf4_0x18cbf4");
#endif

    ctx->pc = 0x18cbf4u;

    // 0x18cbf4: 0x9202036e  lbu         $v0, 0x36E($s0)
    ctx->pc = 0x18cbf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 878)));
    // 0x18cbf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cbfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CBFCu;
    {
        const bool branch_taken_0x18cbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cbfc) {
            ctx->pc = 0x18CC10u;
            return;
        }
    }
    ctx->pc = 0x18CC04u;
    // 0x18cc04: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cc04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18cc08: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x18cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x18cc0c: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cc0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18cc10u;
}
