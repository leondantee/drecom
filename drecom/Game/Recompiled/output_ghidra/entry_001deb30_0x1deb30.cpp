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

// Function: entry_001deb30
// Address: 0x1deb30 - 0x1deb98
void entry_001deb30_0x1deb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001deb30_0x1deb30");
#endif

    ctx->pc = 0x1deb30u;

    // 0x1deb30: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1deb30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1deb34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1deb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deb38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1deb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1deb3c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1deb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1deb40: 0x8c770010  lw          $s7, 0x10($v1)
    ctx->pc = 0x1deb40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1deb44: 0x93a300b0  lbu         $v1, 0xB0($sp)
    ctx->pc = 0x1deb44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1deb48: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1deb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1deb4c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1deb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1deb50: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DEB50u;
    {
        const bool branch_taken_0x1deb50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1deb50) {
            ctx->pc = 0x1DEB98u;
            return;
        }
    }
    ctx->pc = 0x1DEB58u;
    // 0x1deb58: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1deb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1deb5c: 0x2463bd20  addiu       $v1, $v1, -0x42E0
    ctx->pc = 0x1deb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950176));
    // 0x1deb60: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x1deb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1deb64: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1deb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1deb68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1deb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1deb6c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1deb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1deb70: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1deb70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1deb74: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x1deb74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x1deb78: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1deb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1deb7c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1deb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1deb80: 0xfee30020  sd          $v1, 0x20($s7)
    ctx->pc = 0x1deb80u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 32), GPR_U64(ctx, 3));
    // 0x1deb84: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x1deb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x1deb88: 0xaee30028  sw          $v1, 0x28($s7)
    ctx->pc = 0x1deb88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 40), GPR_U32(ctx, 3));
    // 0x1deb8c: 0xaee0002c  sw          $zero, 0x2C($s7)
    ctx->pc = 0x1deb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 0));
    // 0x1deb90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DEB90u;
    {
        const bool branch_taken_0x1deb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deb90) {
            ctx->pc = 0x1DEBB0u;
            return;
        }
    }
    ctx->pc = 0x1DEB98u;
}
