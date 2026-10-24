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

// Function: entry_0031d470
// Address: 0x31d470 - 0x31d4f8
void entry_0031d470_0x31d470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031d470_0x31d470");
#endif

    ctx->pc = 0x31d470u;

    // 0x31d470: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d474: 0xc46112e0  lwc1        $f1, 0x12E0($v1)
    ctx->pc = 0x31d474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d478: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x31d478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x31d47c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x31d47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x31d480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31d480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d484: 0x0  nop
    ctx->pc = 0x31d484u;
    // NOP
    // 0x31d488: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31d488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31d48c: 0xe46012e0  swc1        $f0, 0x12E0($v1)
    ctx->pc = 0x31d48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4832), bits); }
    // 0x31d490: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d494: 0x8c6212b8  lw          $v0, 0x12B8($v1)
    ctx->pc = 0x31d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4792)));
    // 0x31d498: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d49c: 0xac6212b8  sw          $v0, 0x12B8($v1)
    ctx->pc = 0x31d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4792), GPR_U32(ctx, 2));
    // 0x31d4a0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d4a4: 0xc44112e0  lwc1        $f1, 0x12E0($v0)
    ctx->pc = 0x31d4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31d4a8: 0x3c053e99  lui         $a1, 0x3E99
    ctx->pc = 0x31d4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16025 << 16));
    // 0x31d4ac: 0x34a4999a  ori         $a0, $a1, 0x999A
    ctx->pc = 0x31d4acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x31d4b0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31d4b0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d4b4: 0x0  nop
    ctx->pc = 0x31d4b4u;
    // NOP
    // 0x31d4b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x31d4b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31d4bc: 0x0  nop
    ctx->pc = 0x31d4bcu;
    // NOP
    // 0x31d4c0: 0x45010036  bc1t        . + 4 + (0x36 << 2)
    ctx->pc = 0x31D4C0u;
    {
        const bool branch_taken_0x31d4c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31d4c0) {
            ctx->pc = 0x31D59Cu;
            return;
        }
    }
    ctx->pc = 0x31D4C8u;
    // 0x31d4c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31d4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31d4cc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d4d0: 0xac4612b4  sw          $a2, 0x12B4($v0)
    ctx->pc = 0x31d4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4788), GPR_U32(ctx, 6));
    // 0x31d4d4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d4d8: 0xac4012b8  sw          $zero, 0x12B8($v0)
    ctx->pc = 0x31d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4792), GPR_U32(ctx, 0));
    // 0x31d4dc: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31d4e0: 0x3443999a  ori         $v1, $v0, 0x999A
    ctx->pc = 0x31d4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31d4e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31d4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d4e8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31d4ec: 0xe44012e0  swc1        $f0, 0x12E0($v0)
    ctx->pc = 0x31d4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4832), bits); }
    // 0x31d4f0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x31D4F0u;
    {
        const bool branch_taken_0x31d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31d4f0) {
            ctx->pc = 0x31D59Cu;
            return;
        }
    }
    ctx->pc = 0x31D4F8u;
}
