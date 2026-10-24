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

// Function: entry_002495a0
// Address: 0x2495a0 - 0x249638
void entry_002495a0_0x2495a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002495a0_0x2495a0");
#endif

    ctx->pc = 0x2495a0u;

    // 0x2495a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2495a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2495a4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2495a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2495a8: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x2495a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x2495ac: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x2495acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x2495b0: 0x34450fdb  ori         $a1, $v0, 0xFDB
    ctx->pc = 0x2495b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2495b4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2495b4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2495b8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2495b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2495bc: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2495bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2495c0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2495c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2495c4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2495c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2495c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2495c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2495cc: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x2495ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2495d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2495d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2495d4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2495d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2495d8: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x2495d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2495dc: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x2495dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2495e0: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x2495e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2495e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2495e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2495e8: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x2495e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2495ec: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2495ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x2495f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2495f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2495f4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2495f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2495f8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2495f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2495fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2495fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x249600: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x249600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x249604: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249608: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x249608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x24960c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24960cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249610: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x249610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249614: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x249614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x249618: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x249618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24961c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x24961cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249620: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x249620u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x249624: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249628: 0xa4600030  sh          $zero, 0x30($v1)
    ctx->pc = 0x249628u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 48), (uint16_t)GPR_U32(ctx, 0));
    // 0x24962c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x24962cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x249630: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x249630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249634: 0xa4820030  sh          $v0, 0x30($a0)
    ctx->pc = 0x249634u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x249638u;
}
