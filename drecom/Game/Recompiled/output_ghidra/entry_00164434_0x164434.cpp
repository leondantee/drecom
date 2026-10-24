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

// Function: entry_00164434
// Address: 0x164434 - 0x164484
void entry_00164434_0x164434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164434_0x164434");
#endif

    ctx->pc = 0x164434u;

    // 0x164434: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x164434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x164438: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x16443c: 0x94250330  lhu         $a1, 0x330($at)
    ctx->pc = 0x16443cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D0330u));
    // 0x164440: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x164440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164444: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x164444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x164448: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x164448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x16444c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x16444cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164450: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164454: 0xa4230330  sh          $v1, 0x330($at)
    ctx->pc = 0x164454u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D0330u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D0330u, _value); } while (0);
    // 0x164458: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x164458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x16445c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x16445cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164460: 0x942501c0  lhu         $a1, 0x1C0($at)
    ctx->pc = 0x164460u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D01C0u));
    // 0x164464: 0x30647fff  andi        $a0, $v1, 0x7FFF
    ctx->pc = 0x164464u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x164468: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x164468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x16446c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x16446cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x164470: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x164470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x164474: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x164474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x164478: 0xa42301c0  sh          $v1, 0x1C0($at)
    ctx->pc = 0x164478u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D01C0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5D01C0u, _value); } while (0);
    // 0x16447c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x16447Cu;
    {
        const bool branch_taken_0x16447c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16447c) {
            ctx->pc = 0x164508u;
            return;
        }
    }
    ctx->pc = 0x164484u;
}
