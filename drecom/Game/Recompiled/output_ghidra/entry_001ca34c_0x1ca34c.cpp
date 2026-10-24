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

// Function: entry_001ca34c
// Address: 0x1ca34c - 0x1ca3e4
void entry_001ca34c_0x1ca34c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca34c_0x1ca34c");
#endif

    ctx->pc = 0x1ca34cu;

    // 0x1ca34c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca350: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x1ca350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x1ca354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ca354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ca358: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1ca358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x1ca35c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CA35Cu;
    {
        const bool branch_taken_0x1ca35c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca35c) {
            ctx->pc = 0x1CA3E4u;
            return;
        }
    }
    ctx->pc = 0x1CA364u;
    // 0x1ca364: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca368: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1ca368u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ca36c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ca36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ca370: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ca370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ca374: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ca374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ca378: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1ca378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1ca37c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ca37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ca380: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca384: 0xa043157d  sb          $v1, 0x157D($v0)
    ctx->pc = 0x1ca384u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ca388: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca38c: 0x8c421b6c  lw          $v0, 0x1B6C($v0)
    ctx->pc = 0x1ca38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7020)));
    // 0x1ca390: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CA390u;
    {
        const bool branch_taken_0x1ca390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca390) {
            ctx->pc = 0x1CA3E4u;
            return;
        }
    }
    ctx->pc = 0x1CA398u;
    // 0x1ca398: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca39c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3a0: 0xac431b6c  sw          $v1, 0x1B6C($v0)
    ctx->pc = 0x1ca3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 3));
    // 0x1ca3a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3a8: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1ca3a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1ca3ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CA3ACu;
    {
        const bool branch_taken_0x1ca3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca3ac) {
            ctx->pc = 0x1CA3E4u;
            return;
        }
    }
    ctx->pc = 0x1CA3B4u;
    // 0x1ca3b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1ca3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3b8: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1ca3b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1ca3bc: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1ca3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x1ca3c0: 0xa46215ec  sh          $v0, 0x15EC($v1)
    ctx->pc = 0x1ca3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ca3c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3c8: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1ca3c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1ca3cc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ca3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ca3d0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ca3d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ca3d4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA3D4u;
    {
        const bool branch_taken_0x1ca3d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ca3d4) {
            ctx->pc = 0x1CA3E4u;
            return;
        }
    }
    ctx->pc = 0x1CA3DCu;
    // 0x1ca3dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ca3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ca3e0: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1ca3e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ca3e4u;
}
