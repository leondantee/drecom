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

// Function: entry_00130fe4
// Address: 0x130fe4 - 0x130ffc
void entry_00130fe4_0x130fe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130fe4_0x130fe4");
#endif

    ctx->pc = 0x130fe4u;

    // 0x130fe4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x130fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x130fe8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x130fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x130fec: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x130fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x130ff0: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x130ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x130ff4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x130FF4u;
    {
        const bool branch_taken_0x130ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ff4) {
            ctx->pc = 0x130FFCu;
            return;
        }
    }
    ctx->pc = 0x130FFCu;
}
