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

// Function: sub_003AA220
// Address: 0x3aa220 - 0x3aa280
void sub_003AA220_0x3aa220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA220_0x3aa220");
#endif

    ctx->pc = 0x3aa220u;

    // 0x3aa220: 0x0  nop
    ctx->pc = 0x3aa220u;
    // NOP
    // 0x3aa224: 0x0  nop
    ctx->pc = 0x3aa224u;
    // NOP
    // 0x3aa228: 0x0  nop
    ctx->pc = 0x3aa228u;
    // NOP
    // 0x3aa22c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa22cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa230: 0x340430  tge         $at, $s4, 16
    ctx->pc = 0x3aa230u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa234: 0x340530  tge         $at, $s4, 20
    ctx->pc = 0x3aa234u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 20)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aa238: 0x340610  .word       0x00340610                   # mfhi        $zero # 00340600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa238u;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x3aa23c: 0x340790  .word       0x00340790                   # mfhi        $zero # 00340780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa23cu;
    SET_GPR_U64(ctx, 0, ctx->hi);
    // 0x3aa240: 0x340920  .word       0x00340920                   # add         $at, $at, $s4 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aa240u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 20);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 1, (int32_t)result);     } }
    // 0x3aa244: 0x0  nop
    ctx->pc = 0x3aa244u;
    // NOP
    // 0x3aa248: 0x0  nop
    ctx->pc = 0x3aa248u;
    // NOP
    // 0x3aa24c: 0x0  nop
    ctx->pc = 0x3aa24cu;
    // NOP
    // 0x3aa250: 0x0  nop
    ctx->pc = 0x3aa250u;
    // NOP
    // 0x3aa254: 0x0  nop
    ctx->pc = 0x3aa254u;
    // NOP
    // 0x3aa258: 0x0  nop
    ctx->pc = 0x3aa258u;
    // NOP
    // 0x3aa25c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aa25cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aa260: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aa260u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x3aa264: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aa264u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x3aa268: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aa268u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x3aa26c: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aa26cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x3aa270: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aa270u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x3aa274: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aa274u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x3aa278: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aa278u;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x3aa27c: 0x3e803e8  .word       0x03E803E8                   # mfsa        $zero # 03E803C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3aa27cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
    ctx->pc = 0x3aa280u;
}
