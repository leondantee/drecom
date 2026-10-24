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

// Function: entry_00245f70
// Address: 0x245f70 - 0x245ff4
void entry_00245f70_0x245f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00245f70_0x245f70");
#endif

    ctx->pc = 0x245f70u;

    // 0x245f70: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245f74: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x245f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x245f78: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x245f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x245f7c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x245f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x245f80: 0x10600232  beqz        $v1, . + 4 + (0x232 << 2)
    ctx->pc = 0x245F80u;
    {
        const bool branch_taken_0x245f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x245f80) {
            ctx->pc = 0x24684Cu;
            return;
        }
    }
    ctx->pc = 0x245F88u;
    // 0x245f88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x245f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x245f8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245f90: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x245f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x245f94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245f98: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x245f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245f9c: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x245f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x245fa0: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x245fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x245fa4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x245fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x245fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245fac: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x245facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245fb0: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x245fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x245fb4: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x245fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
    // 0x245fb8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x245fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245fc0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245fc4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x245fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245fc8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x245fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x245fcc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x245fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x245fd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x245fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245fd4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245fd8: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x245fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x245fdc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x245fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x245fe0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245fe4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x245fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x245fe8: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x245fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x245fec: 0x10000217  b           . + 4 + (0x217 << 2)
    ctx->pc = 0x245FECu;
    {
        const bool branch_taken_0x245fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245fec) {
            ctx->pc = 0x24684Cu;
            return;
        }
    }
    ctx->pc = 0x245FF4u;
}
