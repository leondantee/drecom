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

// Function: entry_002ce224
// Address: 0x2ce224 - 0x2ce2c0
void entry_002ce224_0x2ce224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ce224_0x2ce224");
#endif

    ctx->pc = 0x2ce224u;

    // 0x2ce224: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce228: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x2ce228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce22c: 0xc481003c  lwc1        $f1, 0x3C($a0)
    ctx->pc = 0x2ce22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce230: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2ce230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2ce234: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ce234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ce238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ce238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ce23c: 0x0  nop
    ctx->pc = 0x2ce23cu;
    // NOP
    // 0x2ce240: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2ce240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2ce244: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x2ce244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2ce248: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce24c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce250: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce250u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce254: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce258: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce258u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce25c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce25cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce260: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce264: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce268: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce26c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2ce26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ce270: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce274: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce278: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce27c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ce27cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ce280: 0x0  nop
    ctx->pc = 0x2ce280u;
    // NOP
    // 0x2ce284: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x2CE284u;
    {
        const bool branch_taken_0x2ce284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ce284) {
            ctx->pc = 0x2CE2C0u;
            return;
        }
    }
    ctx->pc = 0x2CE28Cu;
    // 0x2ce28c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce290: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce294: 0x80630039  lb          $v1, 0x39($v1)
    ctx->pc = 0x2ce294u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 57)));
    // 0x2ce298: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x2ce298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x2ce29c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x2ce29cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x2ce2a0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x2ce2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ce2a4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2ce2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x2ce2a8: 0x24638030  addiu       $v1, $v1, -0x7FD0
    ctx->pc = 0x2ce2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934576));
    // 0x2ce2ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ce2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ce2b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2ce2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce2b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ce2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ce2b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2ce2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2ce2bc: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2ce2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    ctx->pc = 0x2ce2c0u;
}
