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

// Function: entry_00155278
// Address: 0x155278 - 0x1552d0
void entry_00155278_0x155278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155278_0x155278");
#endif

    ctx->pc = 0x155278u;

    // 0x155278: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15527c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x15527cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x155280: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x155280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x155284: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x155284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x155288: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x155288u;
    {
        const bool branch_taken_0x155288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x155288) {
            ctx->pc = 0x15557Cu;
            return;
        }
    }
    ctx->pc = 0x155290u;
    // 0x155290: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x155290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x155294: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x155294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x155298: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x155298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x15529c: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x15529cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x1552a0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1552a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1552a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1552a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1552a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1552a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552ac: 0xa4431250  sh          $v1, 0x1250($v0)
    ctx->pc = 0x1552acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4688), (uint16_t)GPR_U32(ctx, 3));
    // 0x1552b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1552b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1552b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1552b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552b8: 0xe440124c  swc1        $f0, 0x124C($v0)
    ctx->pc = 0x1552b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4684), bits); }
    // 0x1552bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1552bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552c0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1552c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1552c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1552c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1552c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1552c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1552cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1552ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1552d0u;
}
