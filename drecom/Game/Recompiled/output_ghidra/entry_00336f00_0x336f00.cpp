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

// Function: entry_00336f00
// Address: 0x336f00 - 0x336f70
void entry_00336f00_0x336f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336f00_0x336f00");
#endif

    switch (ctx->pc) {
        case 0x336f10u: goto label_336f10;
        default: break;
    }

    ctx->pc = 0x336f00u;

    // 0x336f00: 0x32c400ff  andi        $a0, $s6, 0xFF
    ctx->pc = 0x336f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x336f04: 0x32e500ff  andi        $a1, $s7, 0xFF
    ctx->pc = 0x336f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x336f08: 0xc0ce1ec  jal         func_3387B0
    ctx->pc = 0x336F08u;
    SET_GPR_U32(ctx, 31, 0x336F10u);
    ctx->pc = 0x3387B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3387B0u, 0x336F08u, 0x336F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336F10u;
label_336f10:
    // 0x336f10: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x336f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x336f14: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x336f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x336f18: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x336f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336f1c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x336f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x336f20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x336f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336f24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x336f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x336f28: 0x24429740  addiu       $v0, $v0, -0x68C0
    ctx->pc = 0x336f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940480));
    // 0x336f2c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x336f2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x336f30: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x336f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x336f34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336f38: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f3c: 0xa4224c40  sh          $v0, 0x4C40($at)
    ctx->pc = 0x336f3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C40u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C40u, _value); } while (0);
    // 0x336f40: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x336f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x336f44: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x336f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x336f48: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f4c: 0xa4224c44  sh          $v0, 0x4C44($at)
    ctx->pc = 0x336f4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C44u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C44u, _value); } while (0);
    // 0x336f50: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x336f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x336f54: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336f58: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f5c: 0xa4224c42  sh          $v0, 0x4C42($at)
    ctx->pc = 0x336f5cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C42u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C42u, _value); } while (0);
    // 0x336f60: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x336f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x336f64: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x336f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x336f68: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f6c: 0xa4224c46  sh          $v0, 0x4C46($at)
    ctx->pc = 0x336f6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894C46u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894C46u, _value); } while (0);
    ctx->pc = 0x336f70u;
}
