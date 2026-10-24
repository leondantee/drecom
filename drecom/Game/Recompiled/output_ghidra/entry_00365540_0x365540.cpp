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

// Function: entry_00365540
// Address: 0x365540 - 0x365580
void entry_00365540_0x365540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365540_0x365540");
#endif

    ctx->pc = 0x365540u;

    // 0x365540: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365544: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36554c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36554cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x365550: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x365550u;
    {
        const bool branch_taken_0x365550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365550) {
            ctx->pc = 0x365580u;
            return;
        }
    }
    ctx->pc = 0x365558u;
    // 0x365558: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36555c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x36555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x365560: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x365560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x365564: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x365564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x365568: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x365568u;
    {
        const bool branch_taken_0x365568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365568) {
            ctx->pc = 0x365580u;
            return;
        }
    }
    ctx->pc = 0x365570u;
    // 0x365570: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x365570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x365574: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x365574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x365578: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x365578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x36557c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    ctx->pc = 0x365580u;
}
