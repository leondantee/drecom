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

// Function: entry_0031c6b4
// Address: 0x31c6b4 - 0x31c724
void entry_0031c6b4_0x31c6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031c6b4_0x31c6b4");
#endif

    ctx->pc = 0x31c6b4u;

    // 0x31c6b4: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x31c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c6b8: 0x8c821290  lw          $v0, 0x1290($a0)
    ctx->pc = 0x31c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4752)));
    // 0x31c6bc: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x31c6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x31c6c0: 0xac831290  sw          $v1, 0x1290($a0)
    ctx->pc = 0x31c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4752), GPR_U32(ctx, 3));
    // 0x31c6c4: 0x3c02c1c0  lui         $v0, 0xC1C0
    ctx->pc = 0x31c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49600 << 16));
    // 0x31c6c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31c6c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c6cc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c6d0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x31c6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x31c6d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c6d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c6d8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c6dc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x31c6dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x31c6e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31c6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c6e4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c6e8: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x31c6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x31c6ec: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31c6f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31c6f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c6f4: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c6f8: 0xe440018c  swc1        $f0, 0x18C($v0)
    ctx->pc = 0x31c6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 396), bits); }
    // 0x31c6fc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c700: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x31c700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
    // 0x31c704: 0x3c0441c0  lui         $a0, 0x41C0
    ctx->pc = 0x31c704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16832 << 16));
    // 0x31c708: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31c708u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31c70c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x31c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c710: 0xe44012d0  swc1        $f0, 0x12D0($v0)
    ctx->pc = 0x31c710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4816), bits); }
    // 0x31c714: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x31c714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x31c718: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x31c718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31c71c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31c720: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x31c720u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x31c724u;
}
