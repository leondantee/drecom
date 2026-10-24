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

// Function: entry_0036387c
// Address: 0x36387c - 0x363974
void entry_0036387c_0x36387c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036387c_0x36387c");
#endif

    ctx->pc = 0x36387cu;

    // 0x36387c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x36387cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x363880: 0x2464ad50  addiu       $a0, $v1, -0x52B0
    ctx->pc = 0x363880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946128));
    // 0x363884: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363888: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x363888u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x36388c: 0x3c0407f8  lui         $a0, 0x7F8
    ctx->pc = 0x36388cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2040 << 16));
    // 0x363890: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x363890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363894: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x363894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x363898: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x363898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36389c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36389cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3638a0: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x3638a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x3638a4: 0xa2000013  sb          $zero, 0x13($s0)
    ctx->pc = 0x3638a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 19), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3638a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3638ac: 0xa203002b  sb          $v1, 0x2B($s0)
    ctx->pc = 0x3638acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3638b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3638b4: 0xa2030043  sb          $v1, 0x43($s0)
    ctx->pc = 0x3638b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3638b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3638bc: 0xa203005b  sb          $v1, 0x5B($s0)
    ctx->pc = 0x3638bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638c0: 0xa2000011  sb          $zero, 0x11($s0)
    ctx->pc = 0x3638c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638c4: 0xa2000012  sb          $zero, 0x12($s0)
    ctx->pc = 0x3638c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3638c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3638cc: 0xa2030029  sb          $v1, 0x29($s0)
    ctx->pc = 0x3638ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638d0: 0xa200002a  sb          $zero, 0x2A($s0)
    ctx->pc = 0x3638d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3638d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3638d8: 0xa2030041  sb          $v1, 0x41($s0)
    ctx->pc = 0x3638d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638dc: 0xa2000042  sb          $zero, 0x42($s0)
    ctx->pc = 0x3638dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3638e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3638e4: 0xa2030059  sb          $v1, 0x59($s0)
    ctx->pc = 0x3638e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 89), (uint8_t)GPR_U32(ctx, 3));
    // 0x3638e8: 0xa200005a  sb          $zero, 0x5A($s0)
    ctx->pc = 0x3638e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 90), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3638ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3638f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x3638f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x3638f4: 0x247203f0  addiu       $s2, $v1, 0x3F0
    ctx->pc = 0x3638f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1008));
    // 0x3638f8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x3638f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3638fc: 0xa200006e  sb          $zero, 0x6E($s0)
    ctx->pc = 0x3638fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x363900: 0xa200006f  sb          $zero, 0x6F($s0)
    ctx->pc = 0x363900u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x363904: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x363904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363908: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x363908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36390c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x36390cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x363910: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x363910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x363914: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x363914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x363918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36391c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363920: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x363920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x363924: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x363924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x363928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36392c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36392cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363930: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x363930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x363934: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x363934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x363938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36393c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x36393cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x363940: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x363940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x363944: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x363944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x363948: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x363948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x36394c: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x36394cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x363950: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x363950u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x363954: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x363954u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x363958: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x363958u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36395c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36395cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x363960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x363964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363968: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x363968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36396c: 0x3e00008  jr          $ra
    ctx->pc = 0x36396Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36396Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363974u;
}
