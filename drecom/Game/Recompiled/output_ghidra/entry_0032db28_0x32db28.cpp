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

// Function: entry_0032db28
// Address: 0x32db28 - 0x32db5c
void entry_0032db28_0x32db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032db28_0x32db28");
#endif

    ctx->pc = 0x32db28u;

    // 0x32db28: 0x9227000d  lbu         $a3, 0xD($s1)
    ctx->pc = 0x32db28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x32db2c: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x32db2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x32db30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32db34: 0x14c30009  bne         $a2, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x32DB34u;
    {
        const bool branch_taken_0x32db34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32db34) {
            ctx->pc = 0x32DB5Cu;
            return;
        }
    }
    ctx->pc = 0x32DB3Cu;
    // 0x32db3c: 0x86230010  lh          $v1, 0x10($s1)
    ctx->pc = 0x32db3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32db40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32db40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32db44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32db44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32db48: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x32db48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x32db4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x32db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x32db50: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x32db50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x32db54: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x32db54u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32db58: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32db58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    ctx->pc = 0x32db5cu;
}
