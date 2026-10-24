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

// Function: entry_001a8574
// Address: 0x1a8574 - 0x1a861c
void entry_001a8574_0x1a8574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8574_0x1a8574");
#endif

    ctx->pc = 0x1a8574u;

    // 0x1a8574: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a8578: 0x90223c7b  lbu         $v0, 0x3C7B($at)
    ctx->pc = 0x1a8578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D3C7Bu));
    // 0x1a857c: 0x216bc  dsll32      $v0, $v0, 26
    ctx->pc = 0x1a857cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 26));
    // 0x1a8580: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a8580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a8584: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a8584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a8588: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a8588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a858c: 0x90243c7b  lbu         $a0, 0x3C7B($at)
    ctx->pc = 0x1a858cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x5D3C7Bu));
    // 0x1a8590: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a8590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a8594: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a8594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8598: 0x2402ffc3  addiu       $v0, $zero, -0x3D
    ctx->pc = 0x1a8598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x1a859c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1a859cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1a85a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a85a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a85a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a85a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a85a8: 0xa0223c7b  sb          $v0, 0x3C7B($at)
    ctx->pc = 0x1a85a8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C7Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D3C7Bu, _value); } while (0);
    // 0x1a85ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a85acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a85b0: 0xdc223c78  ld          $v0, 0x3C78($at)
    ctx->pc = 0x1a85b0u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x5D3C78u));
    // 0x1a85b4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1a85b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1a85b8: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x1a85b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x1a85bc: 0x64420003  daddiu      $v0, $v0, 0x3
    ctx->pc = 0x1a85bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)3);
    // 0x1a85c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a85c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a85c4: 0xdc253c78  ld          $a1, 0x3C78($at)
    ctx->pc = 0x1a85c4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5D3C78u));
    // 0x1a85c8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1a85c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1a85cc: 0x227b8  dsll        $a0, $v0, 30
    ctx->pc = 0x1a85ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 30);
    // 0x1a85d0: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1a85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1a85d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a85d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a85d8: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x1a85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
    // 0x1a85dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a85dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a85e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a85e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a85e4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1a85e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a85e8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1a85e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1a85ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a85ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a85f0: 0xfc223c78  sd          $v0, 0x3C78($at)
    ctx->pc = 0x1a85f0u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D3C78u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x5D3C78u, _value); } while (0);
    // 0x1a85f4: 0x82020310  lb          $v0, 0x310($s0)
    ctx->pc = 0x1a85f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1a85f8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1a85f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1a85fc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1a85fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1a8600: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8604: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1a8604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1a8608: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8608u;
    {
        const bool branch_taken_0x1a8608 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a8608) {
            ctx->pc = 0x1A861Cu;
            return;
        }
    }
    ctx->pc = 0x1A8610u;
    // 0x1a8610: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8610u;
    {
        const bool branch_taken_0x1a8610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8610) {
            ctx->pc = 0x1A861Cu;
            return;
        }
    }
    ctx->pc = 0x1A8618u;
    // 0x1a8618: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1a8618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    ctx->pc = 0x1a861cu;
}
