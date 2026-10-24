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

// Function: entry_0016d1bc
// Address: 0x16d1bc - 0x16d3a8
void entry_0016d1bc_0x16d1bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d1bc_0x16d1bc");
#endif

    switch (ctx->pc) {
        case 0x16d37cu: goto label_16d37c;
        default: break;
    }

    ctx->pc = 0x16d1bcu;

    // 0x16d1bc: 0x2be1021  addu        $v0, $s5, $fp
    ctx->pc = 0x16d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x16d1c0: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x16d1c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x16d1c4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d1c8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x16d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x16d1cc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d1d0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d1d4: 0x2a21023  subu        $v0, $s5, $v0
    ctx->pc = 0x16d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x16d1d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16d1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d1dc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d1e0: 0xa4430010  sh          $v1, 0x10($v0)
    ctx->pc = 0x16d1e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d1e4: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x16d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x16d1e8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d1ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d1f0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d1f4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d1f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d1f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d1fc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d200: 0xa4430024  sh          $v1, 0x24($v0)
    ctx->pc = 0x16d200u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d204: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d208: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16d20c: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x16d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x16d210: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d214: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d218: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d218u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d21c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d220: 0xa4430026  sh          $v1, 0x26($v0)
    ctx->pc = 0x16d220u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d224: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d228: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d22c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x16d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16d230: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d234: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d238: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d238u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d23c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d240: 0xa4430028  sh          $v1, 0x28($v0)
    ctx->pc = 0x16d240u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d244: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x16d244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x16d248: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d24c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d250: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16d250u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d254: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d258: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d258u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d25c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d260: 0xa443002a  sh          $v1, 0x2A($v0)
    ctx->pc = 0x16d260u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d264: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d268: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16d268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16d26c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x16d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x16d270: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d270u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d274: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d278: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d278u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d27c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d280: 0xa443002c  sh          $v1, 0x2C($v0)
    ctx->pc = 0x16d280u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d284: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d288: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16d288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d28c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x16d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16d290: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d294: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d298: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d298u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d29c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2a0: 0xa443002e  sh          $v1, 0x2E($v0)
    ctx->pc = 0x16d2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d2a4: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x16d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x16d2a8: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d2b0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x16d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d2b4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d2b8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d2b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d2bc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2c0: 0xa4430030  sh          $v1, 0x30($v0)
    ctx->pc = 0x16d2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 48), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d2c4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16d2cc: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x16d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16d2d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d2d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d2d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d2d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d2dc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2e0: 0xa4430032  sh          $v1, 0x32($v0)
    ctx->pc = 0x16d2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d2e4: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d2e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16d2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d2ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x16d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x16d2f0: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x16d2f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d2f4: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x16d2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
    // 0x16d2f8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d2f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d2fc: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d300: 0xa4430034  sh          $v1, 0x34($v0)
    ctx->pc = 0x16d300u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d304: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x16d304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x16d308: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x16d308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d30c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d310: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x16d310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16d314: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d318: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d318u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d31c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d320: 0xa4430036  sh          $v1, 0x36($v0)
    ctx->pc = 0x16d320u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 54), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d324: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d328: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16d32c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x16d32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16d330: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d334: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d338: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d338u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d33c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d340: 0xa4430038  sh          $v1, 0x38($v0)
    ctx->pc = 0x16d340u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d344: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d348: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16d34c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x16d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x16d350: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x16d350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d354: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x16d354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16d358: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x16d358u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x16d35c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d360: 0xa443003a  sh          $v1, 0x3A($v0)
    ctx->pc = 0x16d360u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x16d364: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x16d364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x16d368: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x16d368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16d36c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x16d36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x16d370: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x16d370u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16d374: 0xc07965c  jal         func_1E5970
    ctx->pc = 0x16D374u;
    SET_GPR_U32(ctx, 31, 0x16D37Cu);
    ctx->pc = 0x1E5970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5970u, 0x16D374u, 0x16D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D37Cu;
label_16d37c:
    // 0x16d37c: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x16d37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d380: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d384: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x16d384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x16d388: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x16d388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d38c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d390: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x16d390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x16d394: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x16d394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16d398: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d39c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x16d39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x16d3a0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x16d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x16d3a4: 0x0  nop
    ctx->pc = 0x16d3a4u;
    // NOP
    ctx->pc = 0x16d3a8u;
}
