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

// Function: entry_0028d1ec
// Address: 0x28d1ec - 0x28d270
void entry_0028d1ec_0x28d1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028d1ec_0x28d1ec");
#endif

    ctx->pc = 0x28d1ecu;

    // 0x28d1ec: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28d1ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28d1f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28d1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28d1f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28d1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28d1f8: 0x1464001d  bne         $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28D1F8u;
    {
        const bool branch_taken_0x28d1f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x28d1f8) {
            ctx->pc = 0x28D270u;
            return;
        }
    }
    ctx->pc = 0x28D200u;
    // 0x28d200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d204: 0x0  nop
    ctx->pc = 0x28d204u;
    // NOP
    // 0x28d208: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x28d208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x28d20c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d20cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d210: 0x0  nop
    ctx->pc = 0x28d210u;
    // NOP
    // 0x28d214: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x28d214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x28d218: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28d21c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d220: 0x0  nop
    ctx->pc = 0x28d220u;
    // NOP
    // 0x28d224: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x28d224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x28d228: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d22c: 0x0  nop
    ctx->pc = 0x28d22cu;
    // NOP
    // 0x28d230: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x28d230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x28d234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28d234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d238: 0x0  nop
    ctx->pc = 0x28d238u;
    // NOP
    // 0x28d23c: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x28d23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x28d240: 0x3c023f60  lui         $v0, 0x3F60
    ctx->pc = 0x28d240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16224 << 16));
    // 0x28d244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d248: 0x0  nop
    ctx->pc = 0x28d248u;
    // NOP
    // 0x28d24c: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x28d24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x28d250: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28d254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d258: 0x0  nop
    ctx->pc = 0x28d258u;
    // NOP
    // 0x28d25c: 0xe6200044  swc1        $f0, 0x44($s1)
    ctx->pc = 0x28d25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 68), bits); }
    // 0x28d260: 0x3c033f60  lui         $v1, 0x3F60
    ctx->pc = 0x28d260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16224 << 16));
    // 0x28d264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d268: 0x0  nop
    ctx->pc = 0x28d268u;
    // NOP
    // 0x28d26c: 0xe6200048  swc1        $f0, 0x48($s1)
    ctx->pc = 0x28d26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 72), bits); }
    ctx->pc = 0x28d270u;
}
