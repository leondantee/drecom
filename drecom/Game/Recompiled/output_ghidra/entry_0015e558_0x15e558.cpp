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

// Function: entry_0015e558
// Address: 0x15e558 - 0x15e5d0
void entry_0015e558_0x15e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e558_0x15e558");
#endif

    ctx->pc = 0x15e558u;

    // 0x15e558: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e55c: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x15e55cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x15e560: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e564: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x15e564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15e568: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x15e568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x15e56c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15e56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15e570: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x15E570u;
    {
        const bool branch_taken_0x15e570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e570) {
            ctx->pc = 0x15E5D8u;
            return;
        }
    }
    ctx->pc = 0x15E578u;
    // 0x15e578: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x15e578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e57c: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x15e57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15e580: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x15e580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x15e584: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15e584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15e588: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x15e588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x15e58c: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x15e58cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x15e590: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15e590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15e594: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x15e594u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x15e598: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x15e598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15e59c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15e59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15e5a0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15E5A0u;
    {
        const bool branch_taken_0x15e5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e5a0) {
            ctx->pc = 0x15E5D8u;
            return;
        }
    }
    ctx->pc = 0x15E5A8u;
    // 0x15e5a8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x15e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e5ac: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15E5ACu;
    {
        const bool branch_taken_0x15e5ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e5ac) {
            ctx->pc = 0x15E5D8u;
            return;
        }
    }
    ctx->pc = 0x15E5B4u;
    // 0x15e5b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e5b8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E5B8u;
    {
        const bool branch_taken_0x15e5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15e5b8) {
            ctx->pc = 0x15E5D0u;
            return;
        }
    }
    ctx->pc = 0x15E5C0u;
    // 0x15e5c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E5C0u;
    {
        const bool branch_taken_0x15e5c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5c0) {
            ctx->pc = 0x15E5D8u;
            return;
        }
    }
    ctx->pc = 0x15E5C8u;
    // 0x15e5c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15E5C8u;
    {
        const bool branch_taken_0x15e5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e5c8) {
            ctx->pc = 0x15E5D8u;
            return;
        }
    }
    ctx->pc = 0x15E5D0u;
}
