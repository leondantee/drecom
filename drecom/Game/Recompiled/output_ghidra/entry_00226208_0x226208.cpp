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

// Function: entry_00226208
// Address: 0x226208 - 0x226288
void entry_00226208_0x226208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226208_0x226208");
#endif

    ctx->pc = 0x226208u;

    // 0x226208: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x226208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22620c: 0x8483127a  lh          $v1, 0x127A($a0)
    ctx->pc = 0x22620cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x226210: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x226210u;
    {
        const bool branch_taken_0x226210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226210) {
            ctx->pc = 0x226288u;
            return;
        }
    }
    ctx->pc = 0x226218u;
    // 0x226218: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22621c: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x22621cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226220: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x226220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226224: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x226224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x226228: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x226228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x22622c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22622cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226230: 0x0  nop
    ctx->pc = 0x226230u;
    // NOP
    // 0x226234: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x226234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x226238: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x226238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x22623c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x22623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226240: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x226244: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x226244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x226248: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x226248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x22624c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22624cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x226250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226254: 0x0  nop
    ctx->pc = 0x226254u;
    // NOP
    // 0x226258: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x226258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22625c: 0x0  nop
    ctx->pc = 0x22625cu;
    // NOP
    // 0x226260: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x226260u;
    {
        const bool branch_taken_0x226260 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x226260) {
            ctx->pc = 0x2262F0u;
            return;
        }
    }
    ctx->pc = 0x226268u;
    // 0x226268: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x226268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x22626c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x22626cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x226270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x226270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226274: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x226274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226278: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x226278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22627c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x22627cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x226280: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x226280u;
    {
        const bool branch_taken_0x226280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226280) {
            ctx->pc = 0x2262F0u;
            return;
        }
    }
    ctx->pc = 0x226288u;
}
