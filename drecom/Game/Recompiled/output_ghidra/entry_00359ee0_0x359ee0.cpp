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

// Function: entry_00359ee0
// Address: 0x359ee0 - 0x359f08
void entry_00359ee0_0x359ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00359ee0_0x359ee0");
#endif

    ctx->pc = 0x359ee0u;

    // 0x359ee0: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x359ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x359ee4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x359ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x359ee8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x359ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x359eec: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x359eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x359ef0: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x359ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x359ef4: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x359ef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x359ef8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x359ef8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x359efc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x359efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x359f00: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x359f00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x359f04: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x359f08u;
}
