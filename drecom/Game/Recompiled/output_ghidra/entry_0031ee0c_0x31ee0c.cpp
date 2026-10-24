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

// Function: entry_0031ee0c
// Address: 0x31ee0c - 0x31ee8c
void entry_0031ee0c_0x31ee0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031ee0c_0x31ee0c");
#endif

    ctx->pc = 0x31ee0cu;

    // 0x31ee0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ee10: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x31ee10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x31ee14: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x31ee14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ee18: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x31ee18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ee1c: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x31ee1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ee20: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31ee20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31ee24: 0xae001298  sw          $zero, 0x1298($s0)
    ctx->pc = 0x31ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4760), GPR_U32(ctx, 0));
    // 0x31ee28: 0xae001290  sw          $zero, 0x1290($s0)
    ctx->pc = 0x31ee28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4752), GPR_U32(ctx, 0));
    // 0x31ee2c: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x31ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x31ee30: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x31ee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x31ee34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ee34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee38: 0x0  nop
    ctx->pc = 0x31ee38u;
    // NOP
    // 0x31ee3c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x31ee3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x31ee40: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x31ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x31ee44: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x31ee44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x31ee48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ee48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee4c: 0x0  nop
    ctx->pc = 0x31ee4cu;
    // NOP
    // 0x31ee50: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x31ee50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x31ee54: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x31ee54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x31ee58: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x31ee58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x31ee5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31ee5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee60: 0x0  nop
    ctx->pc = 0x31ee60u;
    // NOP
    // 0x31ee64: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x31ee64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x31ee68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31ee68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee6c: 0x0  nop
    ctx->pc = 0x31ee6cu;
    // NOP
    // 0x31ee70: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x31ee70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x31ee74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31ee74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee78: 0x0  nop
    ctx->pc = 0x31ee78u;
    // NOP
    // 0x31ee7c: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x31ee7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x31ee80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31ee80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31ee84: 0x0  nop
    ctx->pc = 0x31ee84u;
    // NOP
    // 0x31ee88: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x31ee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    ctx->pc = 0x31ee8cu;
}
