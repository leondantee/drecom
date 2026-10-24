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

// Function: entry_002599c4
// Address: 0x2599c4 - 0x259a0c
void entry_002599c4_0x2599c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002599c4_0x2599c4");
#endif

    ctx->pc = 0x2599c4u;

    // 0x2599c4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599c8: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x2599c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x2599cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2599ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2599d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2599d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2599d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2599d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2599d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2599d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2599dc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599e0: 0xac4305f4  sw          $v1, 0x5F4($v0)
    ctx->pc = 0x2599e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1524), GPR_U32(ctx, 3));
    // 0x2599e4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599e8: 0xa4400606  sh          $zero, 0x606($v0)
    ctx->pc = 0x2599e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1542), (uint16_t)GPR_U32(ctx, 0));
    // 0x2599ec: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x2599ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x2599f0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2599f4: 0xa4430604  sh          $v1, 0x604($v0)
    ctx->pc = 0x2599f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1540), (uint16_t)GPR_U32(ctx, 3));
    // 0x2599f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2599f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2599fc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2599fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x259a00: 0xa4430602  sh          $v1, 0x602($v0)
    ctx->pc = 0x259a00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1538), (uint16_t)GPR_U32(ctx, 3));
    // 0x259a04: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x259A04u;
    {
        const bool branch_taken_0x259a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x259a04) {
            ctx->pc = 0x259B28u;
            return;
        }
    }
    ctx->pc = 0x259A0Cu;
}
