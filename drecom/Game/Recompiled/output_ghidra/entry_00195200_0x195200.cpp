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

// Function: entry_00195200
// Address: 0x195200 - 0x195284
void entry_00195200_0x195200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195200_0x195200");
#endif

    ctx->pc = 0x195200u;

    // 0x195200: 0x92c30348  lbu         $v1, 0x348($s6)
    ctx->pc = 0x195200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x195204: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x195204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x195208: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x195208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19520c: 0x1460ff55  bnez        $v1, . + 4 + (-0xAB << 2)
    ctx->pc = 0x19520Cu;
    {
        const bool branch_taken_0x19520c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19520c) {
            ctx->pc = 0x194F64u;
            return;
        }
    }
    ctx->pc = 0x195214u;
    // 0x195214: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x195214u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x195218: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x195218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19521c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x195220: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x195220u;
    {
        const bool branch_taken_0x195220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195220) {
            ctx->pc = 0x1952DCu;
            return;
        }
    }
    ctx->pc = 0x195228u;
    // 0x195228: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x195228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19522c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19522Cu;
    {
        const bool branch_taken_0x19522c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19522c) {
            ctx->pc = 0x195284u;
            return;
        }
    }
    ctx->pc = 0x195234u;
    // 0x195234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x195234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x195238: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x195238u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x19523c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x195240: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x195240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x195244: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x195244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x195248: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x195248u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x19524c: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x19524cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x195250: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x195250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x195254: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x195254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x195258: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x195258u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x19525c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19525cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x195260: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x195264: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x195264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x195268: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x19526c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x195270: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x195270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x195274: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x195274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x195278: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x195278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19527c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19527Cu;
    {
        const bool branch_taken_0x19527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19527c) {
            ctx->pc = 0x1952D0u;
            return;
        }
    }
    ctx->pc = 0x195284u;
}
