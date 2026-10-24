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

// Function: entry_001927a0
// Address: 0x1927a0 - 0x192824
void entry_001927a0_0x1927a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001927a0_0x1927a0");
#endif

    ctx->pc = 0x1927a0u;

    // 0x1927a0: 0x92c30348  lbu         $v1, 0x348($s6)
    ctx->pc = 0x1927a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1927a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1927a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1927a8: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1927a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1927ac: 0x1460ff55  bnez        $v1, . + 4 + (-0xAB << 2)
    ctx->pc = 0x1927ACu;
    {
        const bool branch_taken_0x1927ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1927ac) {
            ctx->pc = 0x192504u;
            return;
        }
    }
    ctx->pc = 0x1927B4u;
    // 0x1927b4: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x1927b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x1927b8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1927b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1927bc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1927bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1927c0: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1927C0u;
    {
        const bool branch_taken_0x1927c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1927c0) {
            ctx->pc = 0x19287Cu;
            return;
        }
    }
    ctx->pc = 0x1927C8u;
    // 0x1927c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x1927c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1927cc: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1927CCu;
    {
        const bool branch_taken_0x1927cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1927cc) {
            ctx->pc = 0x192824u;
            return;
        }
    }
    ctx->pc = 0x1927D4u;
    // 0x1927d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1927d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1927d8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1927d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1927dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1927dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1927e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1927e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1927e4: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1927e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1927e8: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x1927e8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1927ec: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1927ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1927f0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1927f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1927f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1927f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1927f8: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1927f8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1927fc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1927fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x192800: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x192804: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x192804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x192808: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19280c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x192810: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x192810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x192814: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x192814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x192818: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x192818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19281c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19281Cu;
    {
        const bool branch_taken_0x19281c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19281c) {
            ctx->pc = 0x192870u;
            return;
        }
    }
    ctx->pc = 0x192824u;
}
