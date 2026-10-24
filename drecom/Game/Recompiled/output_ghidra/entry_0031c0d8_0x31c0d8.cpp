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

// Function: entry_0031c0d8
// Address: 0x31c0d8 - 0x31c134
void entry_0031c0d8_0x31c0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c0d8_0x31c0d8");
#endif

    ctx->pc = 0x31c0d8u;

    // 0x31c0d8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x31c0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31c0dc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c0e0: 0xe48012cc  swc1        $f0, 0x12CC($a0)
    ctx->pc = 0x31c0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4812), bits); }
    // 0x31c0e4: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x31c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x31c0e8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x31c0e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31c0ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c0f0: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x31c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x31c0f4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x31c0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x31c0f8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c0fc: 0xc4611304  lwc1        $f1, 0x1304($v1)
    ctx->pc = 0x31c0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31c100: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x31c100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x31c104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c108: 0x0  nop
    ctx->pc = 0x31c108u;
    // NOP
    // 0x31c10c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x31c10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31c110: 0xe4601304  swc1        $f0, 0x1304($v1)
    ctx->pc = 0x31c110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4868), bits); }
    // 0x31c114: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c118: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x31c118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x31c11c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x31c11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x31c120: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x31c120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x31c124: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c128: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x31c128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31c12c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x31c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c130: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31c130u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x31c134u;
}
