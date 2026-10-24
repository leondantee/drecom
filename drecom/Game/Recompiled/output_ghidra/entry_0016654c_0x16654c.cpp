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

// Function: entry_0016654c
// Address: 0x16654c - 0x166600
void entry_0016654c_0x16654c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016654c_0x16654c");
#endif

    ctx->pc = 0x16654cu;

    // 0x16654c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166550: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166550u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166554: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x166558: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166558u;
    runtime->Store64(rdram, ctx, 0x12000000u, GPR_U64(ctx, 3));
    // 0x16655c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16655cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166560: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x166560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x166564: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166564u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166568: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x16656c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x166570: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166570u;
    runtime->Store64(rdram, ctx, 0x12000020u, GPR_U64(ctx, 3));
    // 0x166574: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166578: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x166578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x16657c: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x16657cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166580: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x166584: 0x34420090  ori         $v0, $v0, 0x90
    ctx->pc = 0x166584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)144);
    // 0x166588: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x166588u;
    runtime->Store64(rdram, ctx, 0x12000090u, GPR_U64(ctx, 3));
    // 0x16658c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x16658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166590: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x166590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x166594: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x166594u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166598: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x166598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x16659c: 0x344200a0  ori         $v0, $v0, 0xA0
    ctx->pc = 0x16659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)160);
    // 0x1665a0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1665a0u;
    runtime->Store64(rdram, ctx, 0x120000A0u, GPR_U64(ctx, 3));
    // 0x1665a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1665a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1665a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1665a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1665ac: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1665acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1665b0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1665b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1665b4: 0x344200e0  ori         $v0, $v0, 0xE0
    ctx->pc = 0x1665b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)224);
    // 0x1665b8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1665b8u;
    runtime->Store64(rdram, ctx, 0x120000E0u, GPR_U64(ctx, 3));
    // 0x1665bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1665bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1665c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1665c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1665c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1665c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1665c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1665C8u;
    {
        const bool branch_taken_0x1665c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1665c8) {
            ctx->pc = 0x166600u;
            return;
        }
    }
    ctx->pc = 0x1665D0u;
    // 0x1665d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1665d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1665d4: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x1665d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1665d8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1665d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1665dc: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1665dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1665e0: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1665e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1665e4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1665e4u;
    runtime->Store64(rdram, ctx, 0x12000070u, GPR_U64(ctx, 3));
    // 0x1665e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1665e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1665ec: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1665ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1665f0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1665f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1665f4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1665f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1665f8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1665f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1665fc: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1665fcu;
    runtime->Store64(rdram, ctx, 0x12000080u, GPR_U64(ctx, 3));
    ctx->pc = 0x166600u;
}
