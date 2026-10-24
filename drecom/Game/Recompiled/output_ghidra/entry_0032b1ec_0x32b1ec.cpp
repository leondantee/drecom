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

// Function: entry_0032b1ec
// Address: 0x32b1ec - 0x32b264
void entry_0032b1ec_0x32b1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b1ec_0x32b1ec");
#endif

    ctx->pc = 0x32b1ecu;

    // 0x32b1ec: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b1f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b1f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b1f8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b1fc: 0xc46128f0  lwc1        $f1, 0x28F0($v1)
    ctx->pc = 0x32b1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b200: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b200u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b204: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b20c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b210: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x32b210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32b214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b218: 0x0  nop
    ctx->pc = 0x32b218u;
    // NOP
    // 0x32b21c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b21cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32b220: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x32b220u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b224: 0x0  nop
    ctx->pc = 0x32b224u;
    // NOP
    // 0x32b228: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x32B228u;
    {
        const bool branch_taken_0x32b228 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32b228) {
            ctx->pc = 0x32B264u;
            return;
        }
    }
    ctx->pc = 0x32B230u;
    // 0x32b230: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b234: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b238: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b23c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b240: 0x8c6328c8  lw          $v1, 0x28C8($v1)
    ctx->pc = 0x32b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10440)));
    // 0x32b244: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32b244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32b248: 0x0  nop
    ctx->pc = 0x32b248u;
    // NOP
    // 0x32b24c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b24cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32b250: 0x920328ba  lbu         $v1, 0x28BA($s0)
    ctx->pc = 0x32b250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10426)));
    // 0x32b254: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32b254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32b258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32b258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32b25c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32b260: 0xe46028f0  swc1        $f0, 0x28F0($v1)
    ctx->pc = 0x32b260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 10480), bits); }
    ctx->pc = 0x32b264u;
}
