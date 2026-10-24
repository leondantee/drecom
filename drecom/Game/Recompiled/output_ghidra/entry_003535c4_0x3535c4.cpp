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

// Function: entry_003535c4
// Address: 0x3535c4 - 0x35362c
void entry_003535c4_0x3535c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003535c4_0x3535c4");
#endif

    ctx->pc = 0x3535c4u;

    // 0x3535c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3535c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3535c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3535c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3535cc: 0x80630072  lb          $v1, 0x72($v1)
    ctx->pc = 0x3535ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 114)));
    // 0x3535d0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3535d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3535d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3535d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3535d8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3535d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3535dc: 0x90830074  lbu         $v1, 0x74($a0)
    ctx->pc = 0x3535dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3535e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3535e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3535e4: 0xa0830074  sb          $v1, 0x74($a0)
    ctx->pc = 0x3535e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 116), (uint8_t)GPR_U32(ctx, 3));
    // 0x3535e8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3535e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3535ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3535ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3535f0: 0x90630074  lbu         $v1, 0x74($v1)
    ctx->pc = 0x3535f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x3535f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3535f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3535f8: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x3535f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x3535fc: 0x1460009c  bnez        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x3535FCu;
    {
        const bool branch_taken_0x3535fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3535fc) {
            ctx->pc = 0x353870u;
            return;
        }
    }
    ctx->pc = 0x353604u;
    // 0x353604: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x353604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x353608: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35360c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35360cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353610: 0xa0640074  sb          $a0, 0x74($v1)
    ctx->pc = 0x353610u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 116), (uint8_t)GPR_U32(ctx, 4));
    // 0x353614: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x353614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x353618: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x353618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35361c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x35361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x353620: 0xa064006e  sb          $a0, 0x6E($v1)
    ctx->pc = 0x353620u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 4));
    // 0x353624: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x353624u;
    {
        const bool branch_taken_0x353624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x353624) {
            ctx->pc = 0x353870u;
            return;
        }
    }
    ctx->pc = 0x35362Cu;
}
