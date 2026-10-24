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

// Function: entry_001dae20
// Address: 0x1dae20 - 0x1daf50
void entry_001dae20_0x1dae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dae20_0x1dae20");
#endif

    ctx->pc = 0x1dae20u;

    // 0x1dae20: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x1dae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dae24: 0x2193c  dsll32      $v1, $v0, 4
    ctx->pc = 0x1dae24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1dae28: 0x3193e  dsrl32      $v1, $v1, 4
    ctx->pc = 0x1dae28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 4));
    // 0x1dae2c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1dae2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1dae30: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1dae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1dae34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1dae34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1dae38: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1dae38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1dae3c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1dae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1dae40: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1dae40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae44: 0xfca20030  sd          $v0, 0x30($a1)
    ctx->pc = 0x1dae44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
    // 0x1dae48: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae4c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1dae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1dae50: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1dae50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dae54: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1dae54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1dae58: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x1dae58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1dae5c: 0xafa400bc  sw          $a0, 0xBC($sp)
    ctx->pc = 0x1dae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 4));
    // 0x1dae60: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x1dae60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x1dae64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1dae64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dae68: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dae6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dae70: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1dae70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x1dae74: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1dae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1dae78: 0xac440084  sw          $a0, 0x84($v0)
    ctx->pc = 0x1dae78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 4));
    // 0x1dae7c: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1dae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1dae80: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1dae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1dae84: 0xafa300f8  sw          $v1, 0xF8($sp)
    ctx->pc = 0x1dae84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    // 0x1dae88: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1dae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1dae8c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1dae8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1dae90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1dae90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1dae94: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1dae94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dae98: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1dae98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1dae9c: 0x2482b7a0  addiu       $v0, $a0, -0x4860
    ctx->pc = 0x1dae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
    // 0x1daea0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1daea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1daea4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1daea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1daea8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1daea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1daeac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1daeacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1daeb0: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1daeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1daeb4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1daeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1daeb8: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1daeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1daebc: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1daebcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1daec0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1daec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1daec4: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x1daec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1daec8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1daec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1daecc: 0x2463b7a0  addiu       $v1, $v1, -0x4860
    ctx->pc = 0x1daeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x1daed0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1daed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1daed4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1daed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1daed8: 0x3293c  dsll32      $a1, $v1, 4
    ctx->pc = 0x1daed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 4));
    // 0x1daedc: 0x5293e  dsrl32      $a1, $a1, 4
    ctx->pc = 0x1daedcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 4));
    // 0x1daee0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x1daee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1daee4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1daee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1daee8: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x1daee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1daeec: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x1daeecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1daef0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1daef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1daef4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1daef4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1daef8: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1daef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1daefc: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x1daefcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x1daf00: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1daf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1daf04: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1daf04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1daf08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1daf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1daf0c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x1daf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1daf10: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1daf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1daf14: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1daf14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1daf18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1daf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1daf1c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1daf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1daf20: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1daf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1daf24: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1daf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1daf28: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1daf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x1daf2c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1daf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1daf30: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1daf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1daf34: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x1daf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x1daf38: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x1daf38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1daf3c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1daf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1daf40: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1daf40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1daf44: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x1daf44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1daf48: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x1daf48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1daf4c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x1daf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x1daf50u;
}
