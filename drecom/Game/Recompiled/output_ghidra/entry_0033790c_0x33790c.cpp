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

// Function: entry_0033790c
// Address: 0x33790c - 0x337984
void entry_0033790c_0x33790c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033790c_0x33790c");
#endif

    switch (ctx->pc) {
        case 0x337924u: goto label_337924;
        default: break;
    }

    ctx->pc = 0x33790cu;

    // 0x33790c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x33790cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x337910: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x337910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x337914: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x337914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x337918: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x337918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33791c: 0xc0ce1ec  jal         func_3387B0
    ctx->pc = 0x33791Cu;
    SET_GPR_U32(ctx, 31, 0x337924u);
    ctx->pc = 0x3387B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3387B0u, 0x33791Cu, 0x337924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337924u;
label_337924:
    // 0x337924: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x337924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x337928: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x337928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33792c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33792cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x337930: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x337930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x337934: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x337934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x337938: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x337938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x33793c: 0x24429740  addiu       $v0, $v0, -0x68C0
    ctx->pc = 0x33793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940480));
    // 0x337940: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x337940u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x337944: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x337944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x337948: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x337948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x33794c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33794cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337950: 0xa4224eb0  sh          $v0, 0x4EB0($at)
    ctx->pc = 0x337950u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894EB0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894EB0u, _value); } while (0);
    // 0x337954: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x337954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x337958: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33795c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33795cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337960: 0xa4224eb4  sh          $v0, 0x4EB4($at)
    ctx->pc = 0x337960u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894EB4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894EB4u, _value); } while (0);
    // 0x337964: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x337964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x337968: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x337968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33796c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33796cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337970: 0xa4234eb2  sh          $v1, 0x4EB2($at)
    ctx->pc = 0x337970u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x894EB2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894EB2u, _value); } while (0);
    // 0x337974: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x337974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x337978: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x337978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33797c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33797cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x337980: 0xa4224eb6  sh          $v0, 0x4EB6($at)
    ctx->pc = 0x337980u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894EB6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x894EB6u, _value); } while (0);
    ctx->pc = 0x337984u;
}
