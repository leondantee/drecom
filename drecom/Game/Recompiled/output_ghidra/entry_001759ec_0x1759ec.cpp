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

// Function: entry_001759ec
// Address: 0x1759ec - 0x175a70
void entry_001759ec_0x1759ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001759ec_0x1759ec");
#endif

    ctx->pc = 0x1759ecu;

    // 0x1759ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1759ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1759f0: 0x0  nop
    ctx->pc = 0x1759f0u;
    // NOP
    // 0x1759f4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1759f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1759f8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1759f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1759fc: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x1759fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x175a00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x175a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x175a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a08: 0x0  nop
    ctx->pc = 0x175a08u;
    // NOP
    // 0x175a0c: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x175a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x175a10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a18: 0x0  nop
    ctx->pc = 0x175a18u;
    // NOP
    // 0x175a1c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x175a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x175a20: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a28: 0x0  nop
    ctx->pc = 0x175a28u;
    // NOP
    // 0x175a2c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x175a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x175a30: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x175a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x175a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a38: 0x0  nop
    ctx->pc = 0x175a38u;
    // NOP
    // 0x175a3c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x175a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x175a40: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x175a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x175a44: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x175a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x175a48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x175a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x175a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x175a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x175a50: 0x0  nop
    ctx->pc = 0x175a50u;
    // NOP
    // 0x175a54: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x175a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x175a58: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x175a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x175a5c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x175a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x175a60: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x175a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x175a64: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x175a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x175a68: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x175a68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x175a6c: 0x0  nop
    ctx->pc = 0x175a6cu;
    // NOP
    ctx->pc = 0x175a70u;
}
