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

// Function: Sce_event_start
// Address: 0x284910 - 0x284a24
void Sce_event_start_0x284910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sce_event_start_0x284910");
#endif

    ctx->pc = 0x284910u;

    // 0x284910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284914: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x284914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x284918: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x284918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x28491c: 0x24700110  addiu       $s0, $v1, 0x110
    ctx->pc = 0x28491cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x284920: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284924: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x284924u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x284928: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x284928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x28492c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28492cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284930: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x284930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x284934: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284938: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x284938u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x28493c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x28493cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x284940: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284944: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x284944u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x284948: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28494c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x28494cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x284950: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x284950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x284954: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x284954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x284958: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28495c: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x28495cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x284960: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x284960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284964: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x284964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x284968: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x284968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x28496c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28496cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x284970: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x284970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x284974: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x284974u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0114u));
    // 0x284978: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x284978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x28497c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28497cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x284980: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x284980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x284984: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x284984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x284988: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x284988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x28498c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28498cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x284990: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x284990u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x284994: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x284994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x284998: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x284998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x28499c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x28499cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2849a0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x2849a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x2849a4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2849a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2849a8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2849a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x2849ac: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2849acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2849b0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2849b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2849b4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2849b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2849b8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2849b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x2849bc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2849bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2849c0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2849c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2849c4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2849c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2849c8: 0xa203001c  sb          $v1, 0x1C($s0)
    ctx->pc = 0x2849c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 3));
    // 0x2849cc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2849ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2849d0: 0xa203001d  sb          $v1, 0x1D($s0)
    ctx->pc = 0x2849d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x2849d4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2849d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2849d8: 0xa203001e  sb          $v1, 0x1E($s0)
    ctx->pc = 0x2849d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30), (uint8_t)GPR_U32(ctx, 3));
    // 0x2849dc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2849dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2849e0: 0xa203001f  sb          $v1, 0x1F($s0)
    ctx->pc = 0x2849e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 3));
    // 0x2849e4: 0xa2000023  sb          $zero, 0x23($s0)
    ctx->pc = 0x2849e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x2849e8: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x2849e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x2849ec: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x2849ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x2849f0: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x2849f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x2849f4: 0xa2000024  sb          $zero, 0x24($s0)
    ctx->pc = 0x2849f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 0));
    // 0x2849f8: 0xa2000027  sb          $zero, 0x27($s0)
    ctx->pc = 0x2849f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x2849fc: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x2849fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x284a00: 0xa2000026  sb          $zero, 0x26($s0)
    ctx->pc = 0x284a00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x284a04: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x284a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x284a08: 0xa2000029  sb          $zero, 0x29($s0)
    ctx->pc = 0x284a08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x284a0c: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x284a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x284a10: 0xa200002b  sb          $zero, 0x2B($s0)
    ctx->pc = 0x284a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x284a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x284a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284a18: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x284a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x284a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x284A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284A24u;
}
