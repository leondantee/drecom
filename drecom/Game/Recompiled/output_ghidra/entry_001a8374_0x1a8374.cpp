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

// Function: entry_001a8374
// Address: 0x1a8374 - 0x1a83b4
void entry_001a8374_0x1a8374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8374_0x1a8374");
#endif

    ctx->pc = 0x1a8374u;

    // 0x1a8374: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x1a8374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1a8378: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a837c: 0x90233c7b  lbu         $v1, 0x3C7B($at)
    ctx->pc = 0x1a837cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D3C7Bu));
    // 0x1a8380: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a8380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a8384: 0x2f080  sll         $fp, $v0, 2
    ctx->pc = 0x1a8384u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8388: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1a8388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1a838c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a838cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a8390: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x1a8390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x1a8394: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8398: 0xa0223c7b  sb          $v0, 0x3C7B($at)
    ctx->pc = 0x1a8398u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Bu, _value); } while (0);
    // 0x1a839c: 0x92040317  lbu         $a0, 0x317($s0)
    ctx->pc = 0x1a839cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 791)));
    // 0x1a83a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A83A0u;
    {
        const bool branch_taken_0x1a83a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a83a0) {
            ctx->pc = 0x1A83B4u;
            return;
        }
    }
    ctx->pc = 0x1A83A8u;
    // 0x1a83a8: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x1a83a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a83ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A83ACu;
    {
        const bool branch_taken_0x1a83ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a83ac) {
            ctx->pc = 0x1A83B8u;
            return;
        }
    }
    ctx->pc = 0x1A83B4u;
}
