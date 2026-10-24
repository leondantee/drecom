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

// Function: entry_0011a928
// Address: 0x11a928 - 0x11a974
void entry_0011a928_0x11a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a928_0x11a928");
#endif

    ctx->pc = 0x11a928u;

    // 0x11a928: 0x8c4d490c  lw          $t5, 0x490C($v0)
    ctx->pc = 0x11a928u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18700)));
    // 0x11a92c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x11a92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x11a930: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x11a930u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a934: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11a934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11a938: 0xffa600b0  sd          $a2, 0xB0($sp)
    ctx->pc = 0x11a938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 6));
    // 0x11a93c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x11a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x11a940: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11a940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11a944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a948: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x11a948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x11a94c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x11a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x11a950: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x11a950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x11a954: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x11a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x11a958: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x11a958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x11a95c: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x11a95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x11a960: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x11a960u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x11a964: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x11a964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x11a968: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11a968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x11a96c: 0xafad0054  sw          $t5, 0x54($sp)
    ctx->pc = 0x11a96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 13));
    // 0x11a970: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x11a970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->pc = 0x11a974u;
}
