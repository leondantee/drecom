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

// Function: entry_002a8ca0
// Address: 0x2a8ca0 - 0x2a8d30
void entry_002a8ca0_0x2a8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8ca0_0x2a8ca0");
#endif

    ctx->pc = 0x2a8ca0u;

    // 0x2a8ca0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8ca4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8ca8: 0x247115e0  addiu       $s1, $v1, 0x15E0
    ctx->pc = 0x2a8ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5600));
    // 0x2a8cac: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2a8cacu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8cb0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2a8cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a8cb4: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2a8cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8cb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8cbc: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8cc0: 0x24711770  addiu       $s1, $v1, 0x1770
    ctx->pc = 0x2a8cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 6000));
    // 0x2a8cc4: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2a8cc4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8cc8: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2a8cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a8ccc: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2a8cccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8cd0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8cd4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8cd8: 0x24711db0  addiu       $s1, $v1, 0x1DB0
    ctx->pc = 0x2a8cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 7600));
    // 0x2a8cdc: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2a8cdcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8ce0: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2a8ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a8ce4: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2a8ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8ce8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8cec: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8cf0: 0x24712580  addiu       $s1, $v1, 0x2580
    ctx->pc = 0x2a8cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x2a8cf4: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2a8cf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8cf8: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2a8cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a8cfc: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2a8cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8d00: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8d04: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2a8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2a8d08: 0x24712bc0  addiu       $s1, $v1, 0x2BC0
    ctx->pc = 0x2a8d08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 11200));
    // 0x2a8d0c: 0x96230140  lhu         $v1, 0x140($s1)
    ctx->pc = 0x2a8d0cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2a8d10: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x2a8d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x2a8d14: 0xa6230140  sh          $v1, 0x140($s1)
    ctx->pc = 0x2a8d14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x2a8d18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2a8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a8d1c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2a8d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2a8d20: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2a8d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2a8d24: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x2a8d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a8d28: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2a8d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2a8d2c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2a8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x2a8d30u;
}
