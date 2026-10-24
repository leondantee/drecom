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

// Function: entry_001c72dc
// Address: 0x1c72dc - 0x1c733c
void entry_001c72dc_0x1c72dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c72dc_0x1c72dc");
#endif

    ctx->pc = 0x1c72dcu;

    // 0x1c72dc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1c72dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c72e0: 0x3c043f49  lui         $a0, 0x3F49
    ctx->pc = 0x1c72e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
    // 0x1c72e4: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1c72e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1c72e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c72e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c72ec: 0x0  nop
    ctx->pc = 0x1c72ecu;
    // NOP
    // 0x1c72f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c72f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c72f4: 0x0  nop
    ctx->pc = 0x1c72f4u;
    // NOP
    // 0x1c72f8: 0x4501003f  bc1t        . + 4 + (0x3F << 2)
    ctx->pc = 0x1C72F8u;
    {
        const bool branch_taken_0x1c72f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c72f8) {
            ctx->pc = 0x1C73F8u;
            return;
        }
    }
    ctx->pc = 0x1C7300u;
    // 0x1c7300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7304: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7308: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1c7308u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c730c: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x1c730cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1c7310: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7314: 0xa0900001  sb          $s0, 0x1($a0)
    ctx->pc = 0x1c7314u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 16));
    // 0x1c7318: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c731c: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1c731cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7320: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7324: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1c7324u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c7328: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c7328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c732c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c732cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7330: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1c7330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1c7334: 0x1000040b  b           . + 4 + (0x40B << 2)
    ctx->pc = 0x1C7334u;
    {
        const bool branch_taken_0x1c7334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7334) {
            ctx->pc = 0x1C8364u;
            return;
        }
    }
    ctx->pc = 0x1C733Cu;
}
