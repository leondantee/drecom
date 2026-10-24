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

// Function: entry_00326ddc
// Address: 0x326ddc - 0x326df4
void entry_00326ddc_0x326ddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326ddc_0x326ddc");
#endif

    ctx->pc = 0x326ddcu;

    // 0x326ddc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326de0: 0x90630b1c  lbu         $v1, 0xB1C($v1)
    ctx->pc = 0x326de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x326de4: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x326de4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x326de8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x326de8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x326dec: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x326DECu;
    {
        const bool branch_taken_0x326dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326dec) {
            ctx->pc = 0x326F80u;
            return;
        }
    }
    ctx->pc = 0x326DF4u;
}
