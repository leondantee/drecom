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

// Function: entry_00321604
// Address: 0x321604 - 0x321638
void entry_00321604_0x321604(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321604_0x321604");
#endif

    ctx->pc = 0x321604u;

    // 0x321604: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321608: 0x90830345  lbu         $v1, 0x345($a0)
    ctx->pc = 0x321608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 837)));
    // 0x32160c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x32160cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x321610: 0xa0830345  sb          $v1, 0x345($a0)
    ctx->pc = 0x321610u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 837), (uint8_t)GPR_U32(ctx, 3));
    // 0x321614: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x321614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321618: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x321618u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x32161c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32161cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x321620: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x321620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x321624: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x321624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x321628: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x321628u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32162c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x32162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x321630: 0x246302b0  addiu       $v1, $v1, 0x2B0
    ctx->pc = 0x321630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x321634: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x321634u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x321638u;
}
